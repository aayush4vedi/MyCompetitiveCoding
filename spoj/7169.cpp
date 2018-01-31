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
int main(){
  DRI(n);

  int ans=0;
  int x=0,y=0,z=0;
  REP(i,0,n){

    string s;
    cin>>s;
    if(s[0]=='1' && s[2]=='2'){
      x++;
    }
    if(s[0]=='3' && s[2]=='4'){
      y++;
    }
    if(s[0]=='1' && s[2]=='4'){
      z++;
    }

    //cout<<"i: "<<i;NL;
  }
  // cout<<"x: "<<x;NL;
  // cout<<"y: "<<y;NL;
  // cout<<"z: "<<z;NL;
  /*
  ans = x/2 + 3*(y/4) + (z/4);
  x = x%2 ; y = y%4; z = z%4;
  while(z >0 && y>0){
    ans++;y--;z--;
  }
  while(x>0 && z >= 2){
    ans++;x--;z -= 2;
  }

  while(y >= 2 && x >= 2){
    ans += 2;
    y -= 2;x -= 2;
  }
  ans += (x%2)+(y%4)+(z%4)+1;
  cout<<ans;NL;


  ans += x/2;
  x = x - ans*2;
  int b= min(y,z);
  ans += b;
  y -= b;
  z -= b;
  ans += y;
  ans += ceil(x/2 + z/4);
  ans ++;
  cout<<ans;NL;

  zzz;
}
*/
int main(){

int n,i=0,ans=0;
int a1=0,a2=0,a3=0;
int n1,n2;
char op;
cin>>n;
for(i=0;i<n;i++)
{
    cin >> n1 >> op >> n2;
    if(n1==3) a3++;
    else if(n2==2) a2++;
    else if(n2==4) a1++;
}
ans=a3;
a1=a1-a3;
ans+=(a2-a2%2)/2;
if(a2%2)
{
    ans++;
    a1-=2;
}
if(a1 > 0) {
ans+=(a1-(a1%4))/4;
if(a1%4>0) {
ans++;
}
}
cout<<ans+1<<endl;

return 0;
}
