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

int editdistance(string &s1, string &s2, int n, int m){
  int l[n+1][m+1];

  FOR(i,0,n+1){
    l[i][0]= i;
  }
  FOR(i, 0, m+1){
    l[0][i]=i;
  }
FOR(i,1,n+1){
  FOR(j,1,m+1){
    if(s1[i]== s2[j]) l[i][j]= l[i-1][j-1];
    else l[i][j]= 1+ min3(l[i-1][j-1], l[i][j-1],l[i-1][j]);
  }
}
  return l[n][m];
}

int main(){

    int t;cin>>t;
    while(t--){
      int n;cin>>n;
      int gas[n],cost[n];
      int sumgas=0, sumcost=0;
      FOR(i,0,n) {
        cin>>gas[i];
        sumgas += gas[i];
      }
      FOR(i,0,n){
        cin>>cost[i];
        sumcost +=cost[i];
      }
      if(sumgas >= sumcost){
        int start=0, tank=0;
        FOR(i,0,n){
          tank = gas[i]-cost[i];
          if(tank <0){
            start = i+1;
            tank =0;
          }
        }
      }else{
        cout<<"not possible\n";
      }

      // int start =0, need =0, minus =0, available =0;
      // FOR(i,0,n){
      //   need += cost[i];
      //   available = sum[i] - minus;
      //   if(need > available){
      //     need = 0;
      //     if(cost[i]>gas[i]){
      //       start = i+1;
      //       minus = sum[i];
      //     }else{
      //       start =i;
      //       minus = sum[i]- cost[i];
      //       i--;
      //     }
      //   }
      // }
      // bool possible= need<=available;
      // //if total gas > cost there is always a solution;; hence possible
      // for(int i=0;i<start && possible; i++){
      //   need += cost[i];
      //   available += gas[i];
      //   if(need > available){possible = false;}
      // }
      // if(possible) cout<< start+1<<'\n';
      // else cout<<"not possible\n";

    }
    return 0;
}
