#include<bits/stdc++.h>

using namespace std;

#define nl endl
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
/*
double volTetra(double a, double b, double c, double d,double e, double f){
  double u, v, w;
  u = c*c + a*a -b*b;
  v = a*a + b*b -c*c;
  w = c*c + b*b -a*a;
  double ans = 4*d*d*e*e*f*f - d*d*u*u* - a*a*f*f - e*e*c*c* +u*v*w;
  ans = sqrt(ans);
  ans /= 12;
  return ans;
}
*/
// double x[4][4];
// double det(double x[4][4], int k){
//   double ans=0,s=1,b[4][4];
//   if(k==1)return x[0][0];
//   else{
//     REP(c,0,k){
//       int m=0,n=0;
//       REP(i,0,k){
//         REP(j,0,k){
//           b[i][j]=0;
//           if(i != 0 && j!= c){
//             b[m][n]=x[i][j];
//             if(n < k-2){
//               n++;
//             }else{
//               m++;n=0;
//             }
//           }
//         }
//       }
//       ans += s*x[0][c]*det(b,k-1);
//       s = -1*s;
//     }
//   }
//   return ans;
// }
//
// int main(){
//   // DRI(t);
//   // while(t--){
//   //   double a,b,c,d,e,f;
//   //   cin>>a>>b>>c>>d>>e>>f;
//   //   double ans;
//   //   //double x[4][4];
//   //   REP(i,0,4){
//   //     REP(j,0,4){
//   //       x[i][j]=0;
//   //       if(i==j){
//   //         x[i][j]=0;
//   //       }
//   //       else if(i == 0 && j == 3){
//   //         x[i][j]=1;
//   //       }else if(j==0 && j ==3){
//   //         x[i][j]=1;
//   //       }
//   //     }
//   //     x[0][1]=x[1][0]=a*a;
//   //     x[0][2]=x[2][0]=c*c;
//   //     x[0][3]=x[3][0]=d*d;
//   //     x[1][2]=x[2][1]=b*b;
//   //     x[1][3]=x[3][1]=e*e;
//   //     x[2][3]=x[3][2]=f*f;
//   //   }
//   //   ans = det(x,4);
//   //   ans /= 288;
//   //   //ans = sqrt(ans);
//   //   cout<<fixed<<setprecision(4)<<ans;NL;
//   // }
//   // // cout<<"enter n:\n";
//   // // DRI(n);
//   // // cout<<"now the matrix:\n";
//   // // REP(i,0,n){
//   // //   REP(j,0,n){
//   // //     cin>>a[i][j];
//   // //   }
//   // // }
//   // // cout<<det(a,n);NL;
//   // zzz;
//   int t;
// 	double u, v, w, U, V, W, u1, v1, w1, volsq, vol;
// 	scanf("%d", &t);
// 	while(t--)
// 	{
// 		scanf("%lf%lf%lf%lf%lf%lf", &u,&v,&w,&W,&V,&U);
// 		u1 = v*v + w*w - U*U;
// 		v1 = w*w + u*u - V*V;
// 		w1 = u*u + v*v - W*W;
// 		volsq = 4.0*u*u*v*v*w*w - u*u*u1*u1 - v*v*v1*v1 - w*w*w1*w1 + u1*v1*w1;
// 		vol = sqrt(volsq) / 12.0;
// 		printf("%.4lf\n", vol);
// 	}
// 	return 0;
// }

int main()
{
    int t;
    double  a,b,c,d,e,f,A,B,C,D,E,F;
    double vol;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lf%lf%lf%lf%lf%lf",&a,&c,&e,&b,&d,&f);
        A=a*a;
        B=b*b;
        C=c*c;
        D=d*d;
        E=e*e;
        F=f*f;
        vol = sqrt((-A*B*C - A*D*E - B*D*F - C*E*F + A*C*D + B*C*D + A*B*E + B*C*E + B*D*E +C*D*E + A*B*F + A*C*F +A*D*F + C*D*F + A*E*F + B*E*F - C*C*D - C*D*D - B*B*E - B*E*E- A*A*F - A*F*F)/144.0);
        printf("%.4lf\n",vol);
    }
    return 0;
}
