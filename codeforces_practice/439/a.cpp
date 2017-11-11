#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vll;
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
typedef vector<pii> vii;
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define VREP(I, N) for (int I = N-1; I >=0; I--)
#define REP1(I, N) for (int I = 1; I < (N); ++I)
#define REPV1(I, N) for (int I = N-1; I >=1; I--)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
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
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
const int MAX = 4e6+7;



//A.O(n*n)

int main(){
  DRI(n);
  DRA(a,2*n);
  bool d[MAX];
  memset(d,false,sizeof(d));
  REP(i,2*n)d[a[i]]=true;
  int cnt=0;
  REP(i,2*n){
    REP(j,2*n){
      if(d[a[i]^a[j]])cnt++;
    }
  }
  if(cnt%2 == 0 )cout<<"Karen\n";
  else cout<<"Koyomi\n";
  return 0;
}

//B.Magic
/*
int main(){
  DRI(n);
  DRA(a,2*n);
  cout<<"Karen\n";

  return 0;
}
*/
