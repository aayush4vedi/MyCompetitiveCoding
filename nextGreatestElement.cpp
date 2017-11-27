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

int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    int a[n];
    FOR(i,0,n){cout<<"enter ele: \n";cin>>a[i];}
    //O(n^2) ->
    // FOR(i,0,n){
    //   FOR(j,i+1,n){
    //     int flag =0;
    //     if(a[j]>a[i]){
    //       cout<<a[j]<<" ";
    //       flag++;
    //       break;
    //     }if(j== n-1 && flag ==0){
    //       cout<<"-1 ";
    //     }
    //   }
    //
    // }
    // cout<<"-1 ";
    // cout<<endl;
    //O(n)
    stack<int> s;
    s.push(a[0]);
    int next,current;
    FOR(i,1,n){
      next = a[i];
      while( !s.empty()){
        cout<<"here1\n";
        current = s.top();nene
        s.pop();
        while(next > current){
          cout<<"here2\n";
          cout<<next<<" ";
          if(s.empty()){
            break;
          }
          current = s.top();
          s.pop();
        }
        if(next < current){
          s.push(current);
        }
        s.push(next);
      }
    }
    while( !s.empty()){
      cout<<"-1 ";
      s.pop();
    }

  }



  return 0;
}
