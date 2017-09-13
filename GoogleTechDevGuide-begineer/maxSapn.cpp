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

/*O(n*n)*/
// int main(){
//   int n;cin>>n;
//   int a[n];FOR(i,0,n)cin>>a[i];
//   int tmp=0;
//   FOR(i,0,n){
//     FOR(j,i+1,n){
//       if(a[i]== a[j])tmp = max(tmp, j-i+1);
//     }
//   }
//   cout<<tmp<<endl;
//   return 0;
// }


//**O(nlogn)**/

int main(){
  int n;cin>>n;
  int a[n];FOR(i,0,n)cin>>a[i];int count=0;
  FOR(i,0,n){
    int *pos;
    pos = upper_bound(a,a+n,a[i]);
    if(pos-a < n) count = max(count,*pos-i+2);
  }
  cout<<count<<endl;

  return 0;
}
