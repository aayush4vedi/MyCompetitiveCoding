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
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
typedef vector<pllilli> vllilli;
#define FOR(i,a,b) for(int i=a; i<b;i++)
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
#define REPR(I, A, B) for (int I = (B); I < (A); I--)
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
//   DRII(n,m);
//   int ans= 2*m*n;
//   int a[n][m];
//   REP(i,0,n){
//     REP(j,0,m){
//       DRI(x);
//       a[i][j]=x;
//       if((i==0 && j==0) || (i ==n-1) || (j==m-1)){
//         ans += 2*x;
//       }
//     }
//   }
//   REP(i,0,n){
//     REP(j,0,m-1){
//       ans += abs(a[i][j]-a[i][j+1]);
//     }
//   }
//   REP(i,0,n-1){
//     REP(j,0,n){
//       ans += abs(a[i][j]-a[i+1][j]);
//     }
//   }
//   cout<<ans;
//   NL;
//
//   zzz;
// }
void sortrows(vector<vector<int>>& matrix, int col) {
    sort(matrix.begin(),
              matrix.end(),
              [col](const vector<int>& lhs, const vector<int>& rhs) {
                  return lhs[col] > rhs[col];
              });
}

int main(){
  DRII(n,m);
  vector<vector<int>> v;
  for(int i=0;i<n;++i) {
		//Create a vector
		vector<int> row;
		for(int j=0;j<m;++j){
			int value;
			cin >> value;
			row.push_back(value);
		}
		//Push the row in matrix
		v.push_back(row);
	}
  int col;cin>>col;
  sortrows(v,col);
  // REP(i,0,n){
  //   for(auto itr = v[i].begin(); itr != v[i].end();itr++){
  //     cout<<*itr<<" ";
  //   }
  //   NL;
  // }
  for(int i=0;i<n;++i) {
		for(int j=0;j<m;++j){
			std::cout << v[i][j] << " ";
		}
		std::cout << "\n";
	}


  zzz;
}
