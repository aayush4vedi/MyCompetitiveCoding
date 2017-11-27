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

const int MAX =101;

int lcs(string x, string y){
  int n = x.length();
  int m = y.length();
  int d[n+1][m+1];
  FOR(i,0,n+1){
    FOR(j,0,m+1){
      if(i==0 || j == 0) d[i][j]=0;
      else if(x[i-1] == y[j-1]) d[i][j] = 1 + d[i-1][j-1];
      else d[i][j]= max(d[i-1][j], d[i][j-1]);
    }
  }
  return d[n][m];
}

int main(){
    int t;cin>>t;
    while(t--){
      int n,m;cin>>n>>m;
      string x,y;
      cin>>x>>y;
      cout<<lcs(x,y)<<endl;
    }

    return 0;
}
