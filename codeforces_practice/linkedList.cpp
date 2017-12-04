#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
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
#define FOR(i,a,b) for(int i=a; i<b;i++)
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
#define REPR(I, A, B) for (int I = (B); I < (A); I--)
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
#define pq priority_queue
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;

//
// struct Node
// {
//     int key;
//     struct Node *left, *right;
// };
//
// // A utility function to create a new BST Node
// struct Node *newNode(int item)
// {
//     struct Node *temp =  new Node;
//     temp->key = item;
//     temp->left = temp->right = NULL;
//
//     return temp;
// }
// struct Node* insert(struct Node* node, int key)
// {
//     /* If the tree is empty, return a new Node */
//     if (node == NULL) return newNode(key);
//
//     /* Otherwise, recur down the tree */
//     if (key < node->key)
//     {
//         Node *lchild = insert(node->left, key);
//         node->left  = lchild;
//
//
//     }
//     else if (key > node->key)
//     {
//         Node *rchild = insert(node->right, key);
//         node->right  = rchild;
//
//     }
//
//     /* return the (unchanged) Node pointer */
//     return node;
// }
// Node * lca(Node * root, int v1,int v2){
//     if(root->key > v1 && root->key > v2){ // check if both keys are to the left of curr. node
//         return lca(root->left, v1, v2);
//     }
//     if(root->key < v1 && root->key < v2){ // check if both keys are to the right of curr. node
//         return lca(root->right, v1, v2);
//     }
//     return root;                            // return the LCA
//
// }
//
// // Driver program to test above functions
// int main()
// {
// 	// Let us create the Binary Tree shown in above diagram.
//     struct Node *root = NULL;
//     root = insert(root, 5);
//     insert(root, 3);insert(root,2);insert(root, 4);insert(root, 7);insert(root, 6);insert(root, 8);
//
//     Node *t = lca(root,2,7);cout<< t -> key <<endl;
//     // cout<< lca(root, 5,6)<<endl;
//     // cout<<lca(root, 3,4)<<endl;
//     // cout<<lca(root,2,4)<<endl;
// 	return 0;
// }
// int main ()
// {
//   std::string str ("There are two needles in this haystack with needles.");
//   std::string str2 ("needle");
//
//   // different member versions of find in the same order as above:
//   int found = str.find(str2);
//   if (found!=std::string::npos)
//     std::cout << "first 'needle' found at: " << found << '\n';
//
//   found=str.find("needles are small",found+1,6);
//   if (found!=std::string::npos)
//     std::cout << "second 'needle' found at: " << found << '\n';
//
//   found=str.find("haystack");
//   if (found!=std::string::npos)
//     std::cout << "'haystack' also found at: " << found << '\n';
//
//   found=str.find('.');
//   if (found!=std::string::npos)
//     std::cout << "Period found at: " << found << '\n';
//
//   // let's replace the first needle:
//   str.replace(str.find(str2),str2.length(),"preposition");
//   std::cout << str << '\n';
//
//   return 0;
// }

// int set_bit(int x,int position){
//   int mask = 1 << position;
//   return x | mask;
// }
// int main(){
//   DRII(x,y);
//   cout<<set_bit(x,y);NL;
//
// }



void f(int a[], int n){
  REP(i,0,n-1){

    if(a[i] != 0 && a[i]==a[i+1]){
      a[i] *= 2;
      a[i+1]=0;
      i++;
    }
  }
  int cnt =0;
  REP(i,0,n){
    if(a[i] != 0){
      a[cnt++]=a[i];
    }
  }
}


int main(){
  int n;cin>>n;
  int a[n];
  REP(i,0,n){DRI(x);a[i]=x;}
  f(a,n);
  REP(i,0,n)cout<<a[i]<<" ";
  NL;
  zzz;
}
