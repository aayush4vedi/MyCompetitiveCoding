
/*
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

int id[MAX], nodes, edges;
pair <long long, pair<int, int> > p[MAX];

void initialize()
{
    for(int i = 0;i < MAX;++i)
        id[i] = i;
}

int root(int x)
{
    while(id[x] != x)
    {
        id[x] = id[id[x]];
        x = id[x];
    }
    return x;
}

void union1(int x, int y)
{
    int p = root(x);
    int q = root(y);
    id[p] = id[q];
}

long long kruskal(pair<long long, pair<int, int> > p[])
{
    int x, y;
    long long cost, minimumCost = 1;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost *= cost;
            union1(x, y);
        }
    }
    return minimumCost;
}

int main()
{
    int x, y;
    long long weight, cost, minimumCost;
    initialize();
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        p[i] = make_pair(weight, make_pair(x, y));
    }
    // Sort the edges in the ascending order
    sort(p, p + edges);
    minimumCost = kruskal(p);
    cout << minimumCost << endl;
    return 0;
}

//.c
int a,b,u,v,n,ne=1,i,j;
int min,mincost=1;

int main(){

  int edges,o,p,w;

  scanf("%d\n%d",&n,&edges);
  int cost[n][n];
  int visited[n];
  for(i=0;i<n;i++){
    visited[i]=0;
    for(j=0;j<n;j++)
      cost[i][j]=999;
  }

  for(i=0;i<edges;i++){
    scanf("%d %d %d",&o,&p,&w);
    cost[o][p]=w;
    cost[p][o]=w;
  }

  visited[0]=1;

  while(ne < n){
    for(i=0,min=999;i<n;i++)
      for(j=0;j<n;j++)
        if(cost[i][j]< min)
          if(visited[i]!=0){
            min=cost[i][j];
            a=u=i;
            b=v=j;
          }

          if(visited[u]==0 || visited[v]==0){
            ne++;
            mincost*=min;
            visited[b]=1;
          }
          cost[a][b]=cost[b][a]=999;
  }
  printf("%d\n",mincost);
  return 0;
}
*/
#include<stdio.h>

int main(){
  int n,m;
  scanf("%d %d",&n,&m);
  int visited[n],cost[n][n];
  for(int i=0;i<n;i++){
    visited[i]=0;
    for(int j=0;j<n;j++){
      cost[i][j]=999;
    }
  }
  for(int i=0;i<m;i++){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    cost[x][y]=z;
    cost[y][x]=z;
  }
  visited[0]=1;
  int i=0;
  int ans=1;
  while(i<n){
    min = 999;
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        if(cost[i][j]<min){
          if(visited[i] != 0){
            min = cost[i][j];
            a=u=i;
            b=v=j;
          }
          if(visited[u] ==0 || visited[v]==0){
            i++;
            ans *= min;
            visited[b]=1;
          }
          cost[a][b]=cost[b][a]=999;
        }
      }
    }
  }

}
