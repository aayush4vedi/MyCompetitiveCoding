#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define ld long double
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
typedef vector<pllilli> vllilli;
//vector<int>::iterator j;
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define REPR(I, A, B) for (int I = (B); I > (A); I--)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define DRA(a,n) int a[n]; REP(i,n)cin>>a[i]
#define l_b lower_bound
#define u_b upper_bound
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define NL cout<<endl
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;
//
// int main(){
//   DRI(t);
//   while(t--){
//     DRII(h,a);
//
//     int ans =0;
//     if(h==0 || a ==0){ans =0;}
//     else{
//       //cout<<"here!";NL;
//       h += 3; a+=2;
//       ans ++;
//       //cout<<"h: "<<h<<" a: "<<a;NL;
//       while(true){
//
//         if(h > 5 && a > 10){
//           ans += 2;
//           h -= 2;a -= 8;
//           //cout<<"WA";NL;
//         }
//         else if(h > 20 && a <= 10){
//           ans +=2;h -= 17;a +=7;
//           //cout<<"FA";NL;
//         }
//         else {
//           //cout<<"Oh no!!!";NL;
//           //flag =0;
//           break;
//
//         }
//       }
//     }
//
//     cout<<ans;NL;
//   }
//
//   zzz;
// }

//DP:
int dp[10001][10001];
//MS1(dp);

int foo(int h, int a){
  if(h <= 0 || a <= 0){return -1;}
  else if(dp[h][a]== -1){
    dp[h][a]= max(foo(h-17, a+7)+2,foo(h-2,a-8)+2);
  }
  return dp[h][a];
}

int main(){
  DRI(t);
  while(t--){
    DRII(h,a);
    memset(dp, -1, sizeof(dp));
    if(h== 0 || a==0){cout<<"0";NL;}
    else{
    cout<<foo(h,a);NL;
  }
  }
  zzz;
}
