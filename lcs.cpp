#include<bits/stdc++.h>
//#include <string.h>
using namespace std;

#define nl endl
#define ll long long
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<int>::iterator iv;
typedef vector<char>::iterator cv;
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
#define FORiv (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
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

void lcs(int n, int m, string &a, string &b){
  int l[n+1][m+1];
  FOR(i,0,n+1){
    FOR(j,0,m+1){
      if( i==0 || j== 0) l[i][j] =0;
      else if(a[i-1] == b[j-1]) l[i][j]= 1+ l[i-1][j-1];
      else l[i][j]= max(l[i-1][j], l[i][j-1]);
    }
  }
  // return l[n][m];
  // if( n==0 || m== 0) l[i][j] =0;
  // else if (a[n-1] == b[m-1]) return lcs(n-1 , m-1, a, b)+1;
  // else return max(lcs(n-1, m, a, b), lcs(n, m-1, a,b));
  vc v;
  int i = n,j=m;
  //cv j;
  while(i>0 && j>0){
      if(a[i-1] == b[j-1]) {v.pb(a[i-1]);cout<<"mila\n";i--;j--;}
      else if(l[i][j-1] > l[i-1][j]) j--;
      else i--;
    }

  int s = (int)v.size();
  reverse(v.begin(), v.end());
  // for(vector<int>::iterator j = v.begin(); j!=v.end();j++){
  //   printf("%d", *j );
  // }
  FOR(i,0,s){
    cout<<v[i];
  }

}

int main(){
    int t;cin>>t;
    while(t--){
      int n,m;
      cin>>n>>m;
      string a, b;
      cin>>a;cin>>b;
      //getline(cin, b);
      // char a[n], b[m];
      // FOR(i,0,n) cin>>a[i];
      // FOR(i,0,m) cin>>b[i];
      lcs(n, m, a,b);
      cout<<endl;


    }
    return 0;
}
