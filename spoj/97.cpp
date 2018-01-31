#include<bits/stdc++.h>

using namespace std;

#define lli long long int
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
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
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
#define mp make_pair
#define pb push_back
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define NL cout<<endl
#define zzz return 0
#define all(ar) ar.begin(), ar.end()

int main(){
  int budget,n;
  cin>>budget>>n;
  while(budget != 0 && n!=0){
    int fun,fee;
    vii v;
    REP(i,0,n){
      DRII(fee,fun);
      v.pb(mp(fun,fee));
    }
    sort(all(v));
    reverse(all(v));
    int k[n+1][budget+1];
    int exp=0;
    REP(i,0,n+1){
      REP(j,0,budget+1){
        if(i==0 || j==0)k[i][j]=0;
        else if(v[i-1].second <=j){
          k[i][j]= max((v[i-1].first +k[i-1][j-v[i-1].second ]),k[i-1][j]);
        }else{
          k[i][j]=k[i-1][j];
        }

      }
    }
    REP(i,0,budget+1){
      if(k[n][i]==k[n][budget]){
        exp=i;break;
      }
    }
    // REP(i,0,n+1){
    //   REP(j,0,budget+1){
    //     cout<<k[i][j]<<" ";
    //   }
    //   NL;
    // }
    cout<<exp<<" "<<k[n][budget];NL;
    cin>>budget>>n;

  }

  zzz;

}
