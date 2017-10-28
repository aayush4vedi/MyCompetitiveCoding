#include<bits/stdc++.h>
//#include <string.h>
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
const int MAX = 1e4 + 5;

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
