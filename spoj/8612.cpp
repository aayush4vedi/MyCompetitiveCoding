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
// int main(){
//   DRI(t);
//   while(t--){
//     int n;cin>>n;
//     string s;cin>>s;
//     string a="TTT",TTH="TTH",THT="THT",THH="THH",HTT="HTT",HTH="HTH",HHT="HHT",HHH='HHH';
//     int z1=s.find(TTT),z2=s.find(TTH),z3=s.find(THT),z4=s.find(THH),z5=s.find(HTT),z6=s.find(HTH),z7=s.find(HHT),z8=s.find(HHH),o1=0,o2=0,o3=0,o4=0,o5=0,o6=0,o7=0,o8=0;
//     while (z1!=-1) {z1=s.find(TTT,z1+TTT.size());o1++;}
//     while (z2!=-1) {z2=s.find(TTH,z2+TTH.size());o2++;}
//     while (z3!=-1) {z3=s.find(THT,z3+THT.size());o3++;}
//     while (z4!=-1) {z4=s.find(THH,z4+THH.size());o4++;}
//     while (z5!=-1) {z5=s.find(HTT,z5+HTT.size());o5++;}
//     while (z6!=-1) {z6=s.find(HTH,z6+HTH.size());o6++;}
//     while (z7!=-1) {z7=s.find(HHT,z7+HHT.size());o7++;}
//     while (z8!=-1) {z8=s.find(HHH,z8+HHH.size());o8++;}
//     cout<<n<<" "<<o1<<" "<<o2<<" "<<o3<<" "<<o4<<" "<<o5<<" "<<o6<<" "<<o7<<" "<<o8;NL;
//     // cout<<n<<" "<<count(all(s),'TTT')<<" "<<count(all(s),'TTH')<<" "<<count(all(s),'THT')<<" "<<count(all(s),'THH')<<" "<<count(all(s),'HTT')<<" "<<count(all(s),'HTH');
//     // cout<<" "<<count(all(s),'HHT')<<" "<<count(all(s),'HHH');NL;
//   }
//
//   zzz;
// }

string a[10]={"A","TTT", "TTH", "THT", "THH", "HTT", "HTH", "HHT","HHH"};
int main()
{
	string s;
	int k,t,i,j,n,b,c,d,e,f;
	cin>>t;
	int ans;
	for(k=1;k<=t;k++)
	{
		ans=0;
		cin>>n;
		cin>>s;
		cout<<n<<" ";
		for(i=1;i<=8;i++)
		{
			ans=0;
			for(j=0;j<38;j++)
				if(s[j]==a[i][0] && s[j+1]==a[i][1] && s[j+2]==a[i][2])
					ans++;
			cout<<ans<<" ";
		}
		cout<<endl;
	}
	return 0;
}
