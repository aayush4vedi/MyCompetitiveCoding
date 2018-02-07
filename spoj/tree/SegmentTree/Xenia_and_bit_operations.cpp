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

struct mine{
  int val;
  int level;
}tree[4*MAX];



int getMid(int s, int e) {  return s + (e -s)/2;  }


void constructSTUtil(lli arr[], int ss, lli se, int si)
{
    if (ss == se)
    {
        tree[si].val = arr[ss];
        tree[si].level =0;
        return;
    }
    int mid = (ss + se)/2;
    constructSTUtil(arr, ss, mid, si*2+1);
    constructSTUtil(arr, mid+1, se, si*2+2);
    tree[si].level = tree[si*2]+1;
    if(tree[si].level&0){
      tree[si].val = tree[si*2 + 1].val || tree[si*2 + 2].val;

    }else{
      tree[si].val = tree[si*2 + 1].val ^ tree[si*2 + 2].val;

    }
}
void constructST(lli arr[], lli n)
{
    constructSTUtil(arr, 0, n-1, 0);
}
void updateValueAtIndexUtil(int ss, lli se, int i, int new_val, int si)
{
    if (i < ss || i > se)
        return;
    if(ss == se){
      tree[si].val = new_val;
      return;
    }
    int mid = getMid(ss, se);
    updateValueAtIndexUtil( ss, mid, i, diff, 2 * index + 1);
    updateValueAtIndexUtil( mid+1, se, i, diff, 2 * index + 2);
    if(tree[si].level&0){
      tree[si].val = tree[si*2 + 1].val || tree[si*2 + 2].val;

    }else{
      tree[si].val = tree[si*2 + 1].val ^ tree[si*2 + 2].val;

    }
}
void updateValueAtIndex(lli arr[], lli n, int i, int new_val)
{
    if (i < 0 || i > n-1)
    {
        //cout<<"Invalid Input";
        return;
    }
    int diff = new_val - arr[i];
    arr[i] = new_val;
    updateValueAtIndexUtil(0, n - 1, i, new_val, 0);
}
int main()
{
    lli n,m;cin>>n>>m;
    n = 1<<n;
    lli arr[n];
    REP(i,0,n){
      cin>>arr[i];
    }
    constructST(arr, n);
    while(m--){
      DRII(p,b);
      updateValueAtIndex(arr, n, p-1,b);
      cout<<tree[0].val;NL;
    }
    zzz;
}
