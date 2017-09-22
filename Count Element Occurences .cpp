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

// template<class TYPE>
// void PrintTwice(TYPE data)
// {
//     cout<<"Twice: " << data * 2 << endl;
// }


int main(){
  int t;cin>>t;
  while(t--){

    int n;cin>>n;
    int a[n];FOR(i,0,n)cin>>a[i];
    int k;cin>>k;
    int cnt=0;
    int freq = n/k;
    map<int, int> m;
    FOR(i,0,n){
      if(m.count(a[i])==0){
        m[a[i]]=1;

      }else{
        m[a[i]]++;
      }

    }
    for(map<int,int>::iterator it = m.begin(); it != m.end(); it++){
      if(it -> second >freq) cnt++;
    }
    cout<<cnt<<endl;
  }


  return 0;
}
