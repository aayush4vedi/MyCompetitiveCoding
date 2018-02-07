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


struct edge {
	int to, w;
};

vector<edge>g[101];
int dist[101],par[101];
set<pii>s;
vi ans;
edge e;
bool seen[101];
/*
void dfs(int u){
  seen[u]=true;
  cout<<u<<" ";
  REP(i,0,g[u].size()){
    int v=g[u][i];
    if(!seen[v])dfs(v);
  }
}
*/
int main(){
  DRI(t);
  while(t--){
    REP(i,1,101){
      int j=1;
      while(j<=6 && (i+j)<101){
        //g[i].pb(i+j);
        e.to=(i+j);e.w=1;
        g[i].pb(e);
        j++;
      }
    }
    //
    // REP(i,1,101){
    //   cout<<i<<": ";
    //   REP(j,0,g[i].size()){
    //     cout<<g[i][j]<<" ";
    //   }NL;
    // }

    DRI(n);
    while(n--){
      DRII(ls,le);
      //erase that row where ladder is beggining
      for(int i=0;i<g[ls].size();i++){
        g[ls][i].to=0;g[ls][i].w=INT_MAX;
      }
      //replaze ls with le everywhere
      REP(i,0,101){
        for(int j=0;j<g[i].size();j++){
          if(g[i][j].to==ls){
            g[i][j].to=le;
            g[i][j].w =0;
          }
        }
      }
    }
    DRI(m);
    while(m--){
      DRII(sm,st);//snake mouth, snake tale
      //erase that row where snake mouth is
      for(int i=0;i<g[sm].size();i++){
        g[sm][i].to=0;g[sm][i].w=INT_MAX;
      }
      //replaze sm with st everywhere
      REP(i,0,101){
        for(int j=0;j<g[i].size();j++){
          if(g[i][j].to==sm){
            g[i][j].to=st;
            g[i][j].w =2;
          }
        }
      }
  }
  //REP(i,0,101)if(!seen[i])dfs(i);
  //NL;
  s.insert(make_pair(0, 1));
	for (int i = 2; i <= 100; i++) {
		dist[i] = INT_MAX;
		s.insert(make_pair(INT_MAX, i));
	}
  while (!s.empty()) {
		int cur = s.begin()->second;
		int cur_dist = s.begin()->first;
		s.erase(s.begin());
		for (int i = 0; i < (int) g[cur].size(); i++) {
			int to = g[cur][i].to, w = g[cur][i].w;
			if (cur_dist + w < dist[to]) {
				s.erase(make_pair(dist[to], to));
				dist[to] = cur_dist + w;
				par[to] = cur;
				s.insert(make_pair(dist[to], to));
			}
		}
	}
  if (dist[n] == INT_MAX) {
		printf("-1");
		return 0;
	}

	int cur = n;
	while (par[cur] != 0) {
		ans.push_back(cur);
		cur = par[cur];
	}
	ans.push_back(1);

	reverse(ans.begin(), ans.end());
	for (int i = 0; i < (int) ans.size(); i++)
		printf("%d ", ans[i]);

  }
  zzz;
}
