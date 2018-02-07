#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define ld long double
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef priority_queue<int> pq; //maxHeap
typedef priority_queue <int, vector<int>, greater<int> > pqn; //minHEAP
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> pii;
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
typedef vector<pllilli> vllilli;
//vector<int>::iterator j;
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define REPR(I, A, B) for (int I = (B); I > (A); I--)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define DRA(a,n) int a[n]; REP(i,n)cin>>a[i]
#define l_b lower_bound
#define u_b upper_bound
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define NL cout<<endl
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;

#define ALPHABETS 26
#define CASE 'a'
#define MAX_WORD_SIZE 25

using namespace std;

struct node
{
    struct node * parent;
    struct node * children[ALPHABETS];
    vector<int> occurrences;
};

// Inserts a word 'text' into the Trie Tree
// 'trieTree' and marks it's occurence as 'index'.
void insertWord(struct node * trieTree, char * word, int index)
{
    struct node * traverse = trieTree;

    while (*word != '\0') {     // Until there is something to process
        if (traverse->children[*word - CASE] == NULL) {
            // There is no node in 'trieTree' corresponding to this alphabet

            // Allocate using calloc(), so that components are initialised
            traverse->children[*word - CASE] = (struct node *) calloc(1, sizeof(struct node));
            traverse->children[*word - CASE]->parent = traverse;  // Assigning parent
        }

        traverse = traverse->children[*word - CASE];
        ++word; // The next alphabet
    }

    traverse->occurrences.push_back(index);      // Mark the occurence of the word
}

// Searches for the occurence of a word in 'trieTree',
// if not found, returns NULL,
// if found, returns poniter pointing to the
// last node of the word in the 'trieTree'
// Complexity -> O(length_of_word_to_be_searched)
struct node * searchWord(struct node * treeNode, char * word)
{
    // Function is very similar to insert() function
    while (*word != '\0') {
        if (treeNode->children[*word - CASE] != NULL) {
            treeNode = treeNode->children[*word - CASE];
            ++word;
        } else {
            break;
        }
    }

    if (*word == '\0' && treeNode->occurrences.size() != 0) {
        // Word found
        return treeNode;
    } else {
        // Word not found
        return NULL;
    }
}

// Searches the word first, if not found, does nothing
// if found, deletes the nodes corresponding to the word
void removeWord(struct node * trieTree, char * word)
{
    struct node * trieNode = searchWord(trieTree, word);

    if (trieNode == NULL) {
        // Word not found
        return;
    }

    trieNode->occurrences.pop_back();    // Deleting the occurence

    // 'noChild' indicates if the node is a leaf node
    bool noChild = true;

    int childCount = 0;
    // 'childCount' has the number of children the current node
    // has which actually tells us if the node is associated with
    // another word .This will happen if 'childCount' != 0.
    int i;

    // Checking children of current node
    for (i = 0; i < ALPHABETS; ++i) {
        if (trieNode->children[i] != NULL) {
            noChild = false;
            ++childCount;
        }
    }

    if (!noChild) {
        // The node has children, which means that the word whose
        // occurrence was just removed is a Suffix-Word
        // So, logically no more nodes have to be deleted
        return;
    }

    struct node * parentNode;     // variable to assist in traversal

    while (trieNode->occurrences.size() == 0 && trieNode->parent != NULL && childCount == 0) {
        // trieNode->occurrences.size() -> tells if the node is associated with another word
        //
        // trieNode->parent != NULL -> is the base case sort-of condition, we simply ran
        // out of nodes to be deleted, as we reached the root
        //
        // childCount -> does the same thing as explained in the beginning, to every node
        // we reach

 		childCount = 0;
        parentNode = trieNode->parent;

        for (i = 0; i < ALPHABETS; ++i) {
        	if (parentNode->children[i] != NULL) {
        		if (trieNode == parentNode->children[i]) {
        			// the child node from which we reached
					// the parent, this is to be deleted
	                parentNode->children[i] = NULL;
	                free(trieNode);
	        		trieNode = parentNode;
	            } else {
	            	++childCount;
				}
			}
        }
    }
}

// Prints the 'trieTree' in a Pre-Order or a DFS manner
// which automatically results in a Lexicographical Order
void lexicographicalPrint(struct node * trieTree, vector<char> word)
{
    int i;
    bool noChild = true;

    if (trieTree->occurrences.size() != 0) {
        // Condition trie_tree->occurrences.size() != 0,
        // is a neccessary and sufficient condition to
        // tell if a node is associated with a word or not

        vector<char>::iterator charItr = word.begin();

        while (charItr != word.end()) {
            printf("%c", *charItr);
            ++charItr;
        }
        printf(" -> @ index -> ");

        vector<int>::iterator counter = trieTree->occurrences.begin();
        // This is to print the occurences of the word

        while (counter != trieTree->occurrences.end()) {
            printf("%d, ", *counter);
            ++counter;
        }

        printf("\n");
    }

    for (i = 0; i < ALPHABETS; ++i) {
        if (trieTree->children[i] != NULL) {
            noChild = false;
            word.push_back(CASE + i);   // Select a child

            // and explore everything associated with the cild
            lexicographicalPrint(trieTree->children[i], word);
            word.pop_back();
            // Remove the alphabet as we dealt
            // everything associated with it
        }
    }

    //word.pop_back();
}

int main()
{
    int n, i;
	vector<char> printUtil;		// Utility variable to print tree

	// Creating the Trie Tree using calloc
	// so that the components are initialised
    struct node * trieTree = (struct node *) calloc(1, sizeof(struct node));
    char word[MAX_WORD_SIZE];

	printf("Enter the number of words-\n");
    scanf("%d", &n);

    for (i = 1; i <= n; ++i) {
        scanf("%s", word);
        insertWord(trieTree, word, i);
    }

    printf("\n");   // Just to make the output more readable
    lexicographicalPrint(trieTree, printUtil);

    printf("\nEnter the Word to be removed - ");
    scanf("%s", word);
    removeWord(trieTree, word);

    printf("\n");   // Just to make the output more readable
    lexicographicalPrint(trieTree, printUtil);

    return 0;
}
