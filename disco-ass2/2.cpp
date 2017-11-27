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

//.cpp
vector <int> adj[10];
bool visited[10];
void dfs(int s) {
    visited[s] = true;
    for(int i = 0;i < adj[s].size();++i)    {
     if(visited[adj[s][i]] == false)
         dfs(adj[s][i]);
    }
}
void initialize() {
    for(int i = 0;i < 100;++i)
     visited[i] = false;
}
int main() {
    int nodes, edges, x, y, connectedComponents = 0;
    cin >> nodes;                       //Number of nodes
    cin >> edges;                       //Number of edges
    for(int i = 0;i < edges;++i) {
     cin >> x >> y;
 //Undirected Graph
     adj[x].push_back(y);                   //Edge from vertex x to vertex y
     adj[y].push_back(x);                   //Edge from vertex y to vertex x
    }
    initialize();                           //Initialize all nodes as not visited
    for(int i = 1;i <= nodes;++i) {
     if(visited[i] == false)     {
         dfs(i);
         connectedComponents++;
     }
    }
    cout<< connectedComponents-1 << endl;
    return 0;
}
//.c
int n,a[1000][1000],vis[1000];

void dfs(int root)
{
    vis[root]=1;
    int i;
    for(i=0;i<n;i++)
    {
        if(a[root][i] && !vis[i])
            dfs(i);
    }
}

int main()
{
    int m,i,j,sum=0;
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

    for(i=0;i<n;i++)
    {
        if(!vis[i])
        {
            sum++;
            dfs(i);
        }
    }
    printf("%d",sum);
}
