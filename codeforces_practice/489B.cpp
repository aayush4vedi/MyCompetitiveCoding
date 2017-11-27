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
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MAX = 1000;


int main(){
  int n;cin>>n;
  int a[n];
  FOR(i,0,n)cin>>a[i];
  int m;cin>>m;
  int b[m];FOR(i,0,m)cin>>b[i];
  sort(a,a+n);
  sort(b,b+m);
  int ans =0;
  int i=0,j=0;
  while(i<n && j<m){
    if(abs(a[i]-b[j]) <= 1){
      ans++;i++;j++;
    }else if(a[i]<b[j]){
      i++;
    }else{
      j++;
    }

  }
  cout<<ans<<endl;


  return 0;
}
