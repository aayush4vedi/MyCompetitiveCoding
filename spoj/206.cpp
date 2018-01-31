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
#define pq priority_queue
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;

int main(){
  DRI(t);
  while(t--){
    DRII(n,m);
    bool a[n][m];
    REP(i,0,n){
      REP(j,0,m){
        DRI(x);
        a[i][j]=x;
      }
    }

    vi g[MAX];
    //create graph
    int k=1;
    REP(i,1,n+1){
      REP(j,1,m+1){
        if(i==n){
          if(j != m){
            g[k].pb(k+1);
            g[k+1].pb(k);
          }
        }
        else if(j==m){
          g[k].pb(k+m);
          g[k+m].pb[k];
        }
        else{
          g[k].push_back(k+1);
          g[k+1].push_back(k);
          g[k].push_back(k+m);
          g[k+m].push_back(k);
        }
        k++;
      }
    }
    int dist[MAX];
    bool vis[MAX]={0};
    REP(i,1,n*m +1){
      dist[i]-INT_MAX;
      vis[i]=0;
    }
    k=1;
    queue<int> q;
    REP(i,0,n){
      REP(j,0,m){
        if(a[i][j]==1){
          dist[k]=0;
          vis[k]=1;
          q.push(k);
        }
        k++;
      }
    }
    while (!q.empty())
        {
            int temp = q.front();
            q.pop();

            for (int i = 0; i < g[temp].size(); i++)
            {
                if (visit[g[temp][i]] != 1)
                {
                    dist[g[temp][i]] =
                    min(dist[g[temp][i]], dist[temp]+1);

                    q.push(g[temp][i]);
                    visit[g[temp][i]] = 1;
                }
            }
        }
        for (int i = 1, c = 1; i <= n*m; i++, c++)
        {
            cout << dist[i] << " ";

            if (c%m == 0)
                cout << endl;
        }
  }
  zzz;
}
