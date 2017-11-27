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

int sum(int a[], int n, int r, int l){
  int sum=0;
  if(r<l && r<n && l<n){
    FOR(i,r,l+1)sum+= a[i];
  }
  return sum;
}
int ifwecan(int a[], int n, int x){
  if(sum(a,n,0,x)== sum(a,n,x+1, n-1))return 1;
  return 0;
}
int main(){
  int n;cin>>n;
  int a[n];FOR(i,0,n)cin>>a[i];
  int flag=0;
  FOR(i,0,n){
    if(ifwecan(a,n,i)==1){
      flag++;
      //cout<<"true"<<endl;
      break;
    }
  }
  if(flag==0){
    cout<<"false\n";
  }else{
    cout<<"true\n";
  }

  return 0;
}
