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


/*============================HackerEarht===============================*/
/*============================1.AdjList handeling=======================*/
/*
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
*/

/*===============================BFS-to find level of each node===============================*/
/*
vector <int> v[10] ;   //Vector for maintaining adjacency list explained above
int level[10]; //To determine the level of each node
bool vis[10]; //Mark the node if visited
void bfs(int s) {
    queue <int> q;
    q.push(s);
    level[ s ] = 0 ;  //Setting the level of the source node as 0
    vis[ s ] = true;
    while(!q.empty())
    {
        int p = q.front();
        q.pop();
        for(int i = 0;i < v[ p ].size() ; i++)
        {
            if(vis[ v[ p ][ i ] ] == false)
            {
        //Setting the level of each node with an increment in the level of parent node
                level[ v[ p ][ i ] ] = level[ p ]+1;
                 q.push(v[ p ][ i ]);
                 vis[ v[ p ][ i ] ] = true;
  }
        }
    }
}

*/
/*============================0-1BFS===============================*/
/*
void bfs (int start)
{
      deque <int > Q;     //Double-ended queue
      Q.push_back( start);
      distance[ start ] = 0;
      while( !Q.empty ())
      {
          int v = Q.front( );
          Q.pop_front();
          for( int i = 0 ; i < edges[v].size(); i++)
         {


// if distance of neighbour of v from start node is greater than sum of distance of v from start node and edge weight between v and its neighbour (distance between v and its neighbour of v) ,then change it


              if(distance[ edges[ v ][ i ].first ] > distance[ v ] + edges[ v ][ i ].second )
          {

              distance[ edges[ v ][ i ].first ] = distance[ v ] + edges[ v ][ i ].second;
              if(edges[ v ][ i ].second == 0)
              {
                  Q.push_front( edges[ v ][ i ].first);
              }
              else
              {
                      Q.push_back( edges[ v ][ i ].first);
              }
          }
        }
     }
}
*/
/*=============================DFS-conncected components=============*/
/*
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
        for(int i = 0;i < 10;++i)
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
        cout << "Number of connected components: " << connectedComponents << endl;
        return 0;
    }
    */
/*======================Kruskal's Algo[O(ElogV)]==============================*/
/*
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
    long long cost, minimumCost = 0;
    for(int i = 0;i < edges;++i)
    {
        // Selecting edges one by one in increasing order from the beginning
        x = p[i].second.first;
        y = p[i].second.second;
        cost = p[i].first;
        // Check if the selected edge is creating a cycle or not
        if(root(x) != root(y))
        {
            minimumCost += cost;
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
*/
/*=====================Prim's Algo-)((V+E)logV)======================*/
/*
typedef pair<long long, int> PII;
bool marked[MAX];
vector <PII> adj[MAX];

long long prim(int x)
{
    priority_queue<PII, vector<PII>, greater<PII> > Q;
    int y;
    long long minimumCost = 0;
    PII p;
    Q.push(make_pair(0, x));
    while(!Q.empty())
    {
        // Select the edge with minimum weight
        p = Q.top();
        Q.pop();
        x = p.second;
        // Checking for cycle
        if(marked[x] == true)
            continue;
        minimumCost += p.first;
        marked[x] = true;
        for(int i = 0;i < adj[x].size();++i)
        {
            y = adj[x][i].second;
            if(marked[y] == false)
                Q.push(adj[x][i]);
        }
    }
    return minimumCost;
}

int main()
{
    int nodes, edges, x, y;
    long long weight, minimumCost;
    cin >> nodes >> edges;
    for(int i = 0;i < edges;++i)
    {
        cin >> x >> y >> weight;
        adj[x].push_back(make_pair(weight, y));
        adj[y].push_back(make_pair(weight, x));
    }
    // Selecting 1 as the starting node
    minimumCost = prim(1);
    cout << minimumCost << endl;
    return 0;
}
*/
/*=============Shortest Path Algorithms===============================*/
/*===============Bellman Ford's Algorithm-O(V.E)=============================*/
/*
vector <int> v [2000 + 10];
    int dis [1000 + 10];

    for(int i = 0; i < m + 2; i++){

        v[i].clear();
        dis[i] = 2e9;
    }

   for(int i = 0; i < m; i++){

        scanf("%d%d%d", &from , &next , &weight);

        v[i].push_back(from);
        v[i].push_back(next);
        v[i].push_back(weight);
   }

    dis[0] = 0;
    for(int i = 0; i < n - 1; i++){
        int j = 0;
        while(v[j].size() != 0){

            if(dis[ v[j][0]  ] + v[j][2] < dis[ v[j][1] ] ){
                dis[ v[j][1] ] = dis[ v[j][0]  ] + v[j][2];
            }
            j++;
        }
    }
*/
/*======================Dijkstra's Algorithm- O(V+ElogV)======================*/
/*
#define SIZE 100000 + 1

vector < pair < int , int > > v [SIZE];   // each vertex has all the connected vertices with the edges weights
int dist [SIZE];
bool vis [SIZE];

void dijkstra(){
                                                // set the vertices distances as infinity
    memset(vis, false , sizeof vis);            // set all vertex as unvisited
    dist[1] = 0;
    multiset < pair < int , int > > s;          // multiset do the job as a min-priority queue

    s.insert({0 , 1});                          // insert the source node with distance = 0

    while(!s.empty()){

        pair <int , int> p = *s.begin();        // pop the vertex with the minimum distance
        s.erase(s.begin());

        int x = p.s; int wei = p.f;
        if( vis[x] ) continue;                  // check if the popped vertex is visited before
         vis[x] = true;

        for(int i = 0; i < v[x].size(); i++){
            int e = v[x][i].f; int w = v[x][i].s;
            if(dist[x] + w < dist[e]  ){            // check if the next vertex distance could be minimized
                dist[e] = dist[x] + w;
                s.insert({dist[e],  e} );           // insert the next vertex with the updated distance
            }
        }
    }
}
*/
/*==========Floyd–Warshall's Algorithm(for distance among all pairs)-O(V^3)====*/
/*
for(int k = 1; k <= n; k++){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            dist[i][j] = min( dist[i][j], dist[i][k] + dist[k][j] );
        }
    }
}
*/
/*================Flood-fill Algorithm===============================*/

/*
int visited[11][11];
int mat[11][11],n,m;
int x=1,y=1;
int DFS(int x,int y)
{
if(x==n&&y==m)
return 1;
if(x>n||y>m)
return 0;
if(x<1||y<1)
return 0;
if(visited[x][y]==1)
return 0;
if(mat[x][y]==0)
return 0;
visited[x][y]=1;
if(DFS(x+1,y))
return 1;
if(DFS(x-1,y))
return 1;
if(DFS(x,y+1))
return 1;
if(DFS(x,y-1))
return 1;
return 0;
}
int main()
{
cin >> n >> m;
for(int i=1;i<=n;i++)
{
for(int j=1;j<=m;j++)
cin >> mat[i][j];
}
if(DFS(x,y))
cout << "Yes\n";
else
cout << "No\n";
//cout << "Hello World!" << endl;
return 0;
}

*/





/*===============Articulation Point-O(v+E)===================*/
/*


int parent [MXSIZE];
int child  [MXSIZE];
int low    [MXSIZE];
int tym    [MXSIZE];
bool seen  [MXSIZE];
bool is_cut[MXSIZE];

vector <vector <int> > adj (MXSIZE); //adjancy graph

void dfs(int s)
{

 /* static variable gets declared only  once till the program runs
  static int c=0;

  seen[s]=true;   // mark s as visited

  low[s]=tym[s]=c++; // first assigns and then increment c.

 // checking all children of s
  for(int i=0;i<adj[s].size();i++)
  {
     int curr = adj[s][i];

     if(curr==parent[s])
      continue;         // do nothing if curr is its parent

    if(!seen[curr])
    {

      child[s]++; // one more independent child of s
      parent[curr]=s;
      dfs(curr);


      /* the low time of the oldest ancestor
        reachable from both
      low[s] = min(low[s] , low[curr]);


     /* if curr has greater or equal
        low time than visited time of s then if we cut s then
        curr will get disconnected from the graph
      if(low[curr] >= tym[s])
        is_cut[s]=true;

    }
    else
    {
      /* here instead of low[curr] I used
         tym[curr] , I have explained it below
      low[s]= min(low[s],tym[curr]);
    }


  }

}

int main()
{
  ios_base::sync_with_stdio(false);cin.tie(0);

      int n,m;
      cin>>n>>m;  // no. of vertices and edges

      for(int i=1;i<=m;i++)
      {
          int a,b;
          // undirected edge between a and b
          cin>>a>>b;
          adj[a].push_back(b);
          adj[b].push_back(a);
      }

      parent[1]=-1;
      dfs(1);

      /* the vertex from where we started dfs
         must have atleast two independent children
         otherwise it is not a cut vertex
      is_cut[1]= child[1]>1 ? true : false;


      for(int i=1;i<=n;i++)
      {
        if(is_cut[i])
          cout<<i<<" is cut vertex"<<endl;
      }



    return 0;
}


*/
/*=====================Bridges=================================*/
/*

function find_bridges(adj[][], V, Edge[], E, isBridge[])
    for i = 0 to E
        adj[Edge[i].u][Edge[i].v]=adj[Edge[i].v][Edge[i].u]=0
        for j = 0 to V
            visited[j] = false
        Queue.Insert(Edge[i].u])
        visited[Edge[i].u] = true
        check = false
        while Queue.isEmpty() == false
            x = Queue.top()
            if x == Edge[i].v
                check = true
                BREAK
            Queue.Delete()
            for j = 0 to V
                if adj[x][j] == true AND visited[j] == false
                    Queue.insert(j)
                    visited[j] = true
        adj[Edge[i].u][Edge[i].v]=adj[Edge[i].v][Edge[i].u]=1
        if check == false
            isBridge[i] = true

            time = 0
            function DFS(adj[][], disc[], low[], visited[], parent[], vertex, n)
                    visited[vertex] = true
                    disc[vertex] = low[vertex] = time+1
                    child = 0
                    for i = 0 to n
                            if adj[vertex][i] == true
                                    if visited[i] == false
                                            child = child + 1
                                            parent[i] = vertex
                                            DFS(adj, disc, low, visited, parent, i, n, time+1)
                                            low[vertex] = minimum(low[vertex], low[i])
                                            if low[i] > disc[vertex]
                                                    print vertex, i
                                    else if parent[vertex] != i
                                            low[vertex] = minimum(low[vertex], disc[i])
*/
/*=================Biconneceted Graph- no Articulation points=========*/

/*code: just as Articulation point; return false if found any*/

/*find biconnected components in a graph*/
/*
time = 0
function DFS(vertex, adj[][], low[], disc[], parent[], visited[], V, stack)
    disc[vertex]=low[vertex]=time+1
    time = time + 1
    visited[vertex]=true
    child = 0
    for i = 0 to V
        if adj[vertex][i] == true
            if visited[i] == false
                child = child + 1
                push edge(u,v) to stack
                parent[i] = vertex
                DFS(i, adj, low, disc, visited, V, time, stack)
                low[vertex] = minimum(low[vertex], low[i])
                if parent[vertex] == nil AND child > 1
                    while last element of stack != (u,v)
                        print last element of stack
                        pop from stack
                    print last element of stack
                    pop from stack
                if parent[vertex] != nil AND low[i] >= disc[vertex]
                    while last element of stack != (u,v)
                        print last element of stack
                        pop from stack
                    print last element of stack
                    pop from stack
            else if parent[vertex] != i AND disc[i] < low[vertex]
                low[vertex] = disc[i]
                push edge(u,v) to stack

fuction biconnected_components(adj[][], V)
    for i = 0 to V
        if visited[i] == false
            DFS(i, adj, low, disc, parent, visited, V, time, stack)
            while stack is not empty
                print last element of stack
                pop from stack
*/
/*==================Topological Sort-using BFS=======================*/
/*
topological_sort(N, adj[N][N])
        T = []
        visited = []
        in_degree = []
        for i = 0 to N
                in_degree[i] = visited[i] = 0

        for i = 0 to N
                for j = 0 to N
                        if adj[i][j] is TRUE
                                in_degree[j] = in_degree[j] + 1

        for i = 0 to N
                if in_degree[i] is 0
                        enqueue(Queue, i)
                        visited[i] = TRUE

        while Queue is not Empty
                vertex = get_front(Queue)
                dequeue(Queue)
                T.append(vertex)
                for j = 0 to N
                        if adj[vertex][j] is TRUE and visited[j] is FALSE
                                in_degree[j] = in_degree[j] - 1
                                if in_degree[j] is 0
                                        enqueue(Queue, j)
                                        visited[j] = TRUE
        return T
*/
/*==================Topological Sort-using BFS=======================*/

/*
T = []
visited = []

topological_sort( cur_vert, N, adj[][] ){
    visited[cur_vert] = true
    for i = 0 to N
        if adj[cur_vert][i] is true and visited[i] is false
        topological_sort(i)
    T.insert_in_beginning(cur_vert)
}
*/
