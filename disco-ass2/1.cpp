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
const int MAX = 1000;

int w[MAX][MAX];
int a[MAX*MAX],b[MAX*MAX],c[MAX*MAX];
//.cpp
vector<int>g[100];
bool flag = 0;
bitset<100>status;
int N, M, counter = 0;
void dfs(int i ){
  if(++counter == N){flag = 1; return;}
  for(auto v: g[i]){
    if(!status[v]){
      cout<<v<<" ";
      status[v] = 1;
      dfs(v);

    }
  }
  counter--;
}
int main(){

cin>>N>>M;
for(int i =0; i < M; i++){
  int a, b;cin>>a>>b;
  g[a].pb(b);
  //g[b].pb(a);
}
int i =0;
cout<<i<<" ";
dfs(i);
cout<<i;
NL;
//printf("%s", flag?"YES":"NO");
return 0;
}

//.c
int n,a[1000][1000],vis[1000],res[1005],len=0;

void dfs(int root)
{
    res[len++]=root;
    vis[root]=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[root][i] && !vis[i])
            dfs(i);
    }
    if(len!=n)
    {
        len--;
        vis[root]=0;
    }
    else
    {
        for(i=0;i<len;i++)
            printf("%d ",res[i]);
        exit(0);
    }
}

int main()
{
    int m,i,j;
    scanf("%d %d",&n,&m);

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    for(i=0;i<n;i++)
        vis[i]=0;

    for(i=0;i<m;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);
        a[l][r]=1;
        a[r][l]=1;
    }

    dfs(0);
    res[len++]=0;
    printf("No");
}
