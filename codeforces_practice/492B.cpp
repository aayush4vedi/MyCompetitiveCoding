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

const int MAX = 1000;

bool isPossible(double a[], int n, int l, double d){
  pair<double, double> p[n];
  FOR(i,0,n){
    p[i]= mp(a[i]-d, a[i]+d);
  }
  sort(p,p+n);
  int tmp=0;
  int i=0;
  double x;
  while(i<n-1){
    if(p[i].second<p[i+1].first){tmp++;x=p[i+1].second;break;}
    else {i++;x=p[i+1].second;}
  }
  if(x <l)tmp++;

  if(tmp>0)return false;
  else return true;
}

int main(){
  int n,l;cin>>n>>l;
  double a[n];
  FOR(i,0,n)cin>>a[i];
  // sort(a,a+n);
  double d=0;
  while(d<=n/2){
    if(isPossible(a,n,l,d)){
      //cout<<std::setprecision(10)<<d<<endl;
      cout<<d<<endl;
      break;
    }else{
      d += 0.5;
      cout<<"+\n";
    }
  }




  return 0;
}
