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

int mincostpath(int a[][100], int n){
  int d[n][n];
  d[0][0]= a[0][0];
  FOR(i,1,n){
    d[i][0]= d[i-1][0] + a[i][0];
  }
  FOR(i,1,n){
    d[0][i] = d[0][i-1] + a[0][i];
  }
  FOR(i,1,n+1){
    FOR(j,1,n+1){
      d[i][j]= a[i][j]+ min3(d[i-1][j], d[i][j-1], d[i-1][j-1]);
    }
  }
  return d[n][n];
}

int main(){

  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int a[n][n];
    FOR(i,0,n){
      FOR(j,0,n){
        cin>>a[i][j];
      }
    }
    cout<<mincostpath(a[][n],n)<<endl;
  }

  return 0;
}
