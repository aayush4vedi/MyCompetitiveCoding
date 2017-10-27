#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define ll long long
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<ll> vll;
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
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))

#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
inline ll Power(int b, int p) { ll ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

const int MAX_N = 100;


/*
int main(){
  int n;cin>>n;
  vi v[n-1];
  int g,h;
  FOR(i,0,n-1){

    cin>>g>>h;
    v[g].pb(h);
    v[h].pb(g);
  }
  int x;cin>>x;
  int start =1, cnt=0;
  bool marked[10000];
  int level[10000];
  memset(marked, false, 10000);
  queue<int>q;
  q.push(start);
  marked[start]=true;
  level[start]=1;
  while(!q.empty()){
    int k=q.front();
    q.pop();
    for(vector<int>::iterator j = v[k].begin(); j!=v[k].end();j++){
      if(!marked[*j]){
        marked[*j]=true;
        level[*j]=level[k]+1;
        if(level[*j]==x)cnt++;
        q.push(*j);
      }
    }
  }
  cout<<cnt<<endl;

  return 0;
}
*/
//
// bool visited[1000];
// vi v[1000];
// // void initialise(){
// //   FOR(i,0,1000)visited[i]=false;
// // }
// int cnt=0;
// int dfs(int s) {
//     visited[s] = true;
//     cnt =0;
//     for(int i = 0;i < v[s].size();++i)    {
//      if(visited[v[s][i]] == false)
//           cnt++;
//          dfs(v[s][i]);
//     }
//     return cnt;
// }
//
//
// int main(){
//   int n;cin>>n;
//   //vi v[n-1];
//   int a,b;
//   FOR(i,0,n-1){
//     cin>>a>>b;
//     v[a].pb(b);
//     v[b].pb(a);
//   }
//   int x;cin>>x;
//   FOR(i,0,n-1){
//     visited[i]=false;
//   }
//   int tmp;
//   int ans=0;
//   FOR(i,1,n){
//     if(visited[i] == false){
//       tmp=dfs(i);
//       if(i ==x) {ans= tmp;break;}
//     }
//   }
//   cout<<ans<<endl;
// }
vector <int> adj[10];

    int main()
    {
        int x, y, nodes, edges;
        cin >> nodes;       //Number of nodes
        cin >> edges;       //Number of edges
        for(int i = 0;i < edges;++i)
        {
                cin >> x >> y;
            adj[x].push_back(y);        //Insert y in adjacency list of x
         }
    for(int i = 1;i <= nodes;++i)
    {
            cout << "Adjacency list of node " << i << ": ";
        for(int j = 0;j < adj[i].size();++j)
            {
            if(j == adj[i].size() - 1)
                    cout << adj[i][j] << endl;
            else
                cout << adj[i][j] << " --> ";
    }
    }
    return 0;
    }
