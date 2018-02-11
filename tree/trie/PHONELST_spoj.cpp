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
#define ALPHABETS 10
#define MAX_WORD_SIZE 10

using namespace std;

struct node
{
	struct node * parent;
	struct node * children[ALPHABETS];
	vector<int> occurrences;
};

bool Insert(struct node * trieTree, char text[], int index)
{
	int i = 0, j;
	struct node * temp = trieTree;
	bool result = true;

	while (text[i] != '\0') {
		if (temp->occurrences.size() != 0) {
			// A prefix to this word
			// was already inserted
			result = false;
			break;
		}

		if (temp->children[text[i] - '0'] == NULL) {
			temp->children[text[i] - '0'] = (struct node *) calloc(1, sizeof(struct node));
			temp->children[text[i] - '0']->parent = temp;
		}

		temp = temp->children[text[i] - '0'];
		++i;
	}

	temp->occurrences.push_back(index);

	for (j = 0; j < ALPHABETS; ++j) {
		if (temp->children[j] != NULL) {
			// The newly inserted word is
			// prefix to another word
			result = false;
			break;
		}
	}

	return result;
}

int main()
{
	int t, n, i;

	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);

		struct node * trieTree = (struct node *) calloc(1, sizeof(struct node));
		char word[MAX_WORD_SIZE + 1];
		bool result = true;

		for (i = 0; i < n; ++i) {
			scanf("%s", word);

			if(!Insert(trieTree, word, i + 1)) {
				result = false;
			}
		}

		if (result) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}

		free(trieTree);
	}

	return 0;
}
