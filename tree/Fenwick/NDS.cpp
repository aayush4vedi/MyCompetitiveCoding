//
// #include<bits/stdc++.h>
//
// using namespace std;
//
// #define nl endl
// #define lli long long int
// #define ld long double
// #define vb vector<bool>
// typedef vector<int> vi;
// typedef vector<lli> vlli;
// typedef vector<double> vd;
// typedef vector<char> vc;
// typedef vector<string> vs;
// typedef vector<vector<int> > vvi;
// typedef vector<vector<char> > vvc;
// typedef priority_queue<int> pq; //maxHeap
// typedef priority_queue <int, vector<int>, greater<int> > pqn; //minHEAP
// typedef map<int, int> mii;
// typedef map<string, int> msi;
// typedef map<int, string> mis;
// typedef map<string, bool> msb;
// typedef map<string, string> mss;
// typedef map<string, char> msc;
// typedef pair<int, int> pii;
// typedef pair<lli, lli> pllilli;
// typedef vector<pii> vii;
// typedef vector<pllilli> vllilli;
// //vector<int>::iterator j;
// #define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
// #define pb push_back
// //#define pf push_front
// #define mp make_pair
// #define min3(a,b,c) min(a,min(b,c))
// #define max3(a,b,c) max(a,max(b,c))
// #define SZ(X) ((int)(X).size())
// #define ALL(X) (X).begin(), (X).end()
// #define REP(I, A, B) for (int I = (A); I < (B); ++I)
// #define REPR(I, A, B) for (int I = (B); I > (A); I--)
// #define RI(X) scanf("%d", &(X))
// #define RII(X, Y) scanf("%d%d", &(X), &(Y))
// #define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
// #define DRI(X) int (X); scanf("%d", &X)
// #define DRLLI(X) lli (X); scanf("%lld", &X)
// #define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
// #define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
// #define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
// #define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
// #define RS(X) scanf("%s", (X))
// #define DRA(a,n) int a[n]; REP(i,n)cin>>a[i]
// #define l_b lower_bound
// #define u_b upper_bound
// #define MS0(X) memset((X), 0, sizeof((X)))
// #define MS1(X) memset((X), -1, sizeof((X)))
// #define LEN(X) strlen(X)
// #define NL cout<<endl
// #define isOdd(i) (i&1)
// #define isEven(i) (!(i&1))
// #define all(ar) ar.begin(), ar.end()
// #define zzz return 0
// inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
// const int MOD = 1e9+7;
// const int SIZE = 4e6+10;
// const int MAX = 1e9+1;
//
// /*
// DP approach- O(n*n)
// */
// /*
// int LIS(vi v){
//   int n=v.size();
//   int dp[n];
//   REP(i,0,n)dp[i]=1;
//   REP(i,1,n){
//     REP(j,0,i){
//       if(v[i]>v[j]){
//         dp[i]=max(dp[i],1+dp[j]);
//       }
//     }
//   }
//   return dp[n-1];
// }
//
// int main(){
//   DRI(t);
//   while(t--){
//     DRI(n);
//     int a[n];
//     REP(i,0,n){
//       cin>>a[i];
//     }
//     DRI(l);
//     int ans=INT_MAX;
//     vi v;
//     int flag=0;
//     REP(i,0,n){
//       v.pb(a[i]);
//       //cout<<LIS(v)<<" ";
//
//       if(LIS(v)>=l){
//         flag++;
//         ans = min(ans,a[i]);
//       }
//
//     }
//     NL;
//     if(flag==0)cout<<"-1\n";
//     else{
//     cout<<ans;NL;
//     }
//   }
//   zzz;
// }
// */
// /*
// O(nlogn)-Fenwick Tree- https://www.geeksforgeeks.org/longest-monotonically-increasing-subsequence-size-n-log-n/
// https://www.youtube.com/watch?v=S9oUiVYEq7E&t=201s
// */
// /*
// int ceilIndex(int a[],int l, int r,int key){
//   while(r-l>1){
//     int mid = l +(r-l)/2;
//     if(key <= a[mid]){
//       r=mid;
//     }else{
//       l=mid;
//     }
//   }
//   return r;
// }
//
// int main(){
//   DRI(t);
//   while(t--){
//     DRI(n);
//     cout<<"n is: "<<n;NL;
//     int T[n];
//     REP(i,0,n){
//       T[i]=-1;
//     }
//     int len=0;
//     int a[n];
//     REP(i,0,n)cin>>a[i];
//     T[0]=a[0];
//     int d;cin>>d;d--;
//     REP(i,1,n){
//       //cout<<"i: "<<i<<"len: "<<len;NL;
//       if(a[i]<T[0]){T[0]=a[i];}
//       else if(a[i]>T[len]){
//         len++;
//         T[len]=a[i];
//       }else{
//         T[ceilIndex(a,0,len-1,a[i])+1]=a[i];
//         //cout<<"here\n";
//       }
//
//     }
//     // REP(i,0,n){
//     //   cout<<T[i]<<" ";
//     // }NL;
//     if(T[d] == -1)cout<<"-1\n";
//     else cout<<T[d];NL;
//   }
//   zzz;
// }
// */
// int T, N, L;
// int a[me], ft[me];
//
// void add(int pos, int value){
//     for( ; pos < me; pos += (pos & -pos))
//         ft[pos] = max(ft[pos], value);
// }
// int get(int pos){
//     int s = 0;
//     for( ; pos > 0; pos -= (pos & -pos))
//         s = max(s, ft[pos]);
//     return s;
// }
//
// int main(int argc, const char * argv[]) {
//     //ios_base::sync_with_stdio(0);
//     //cin.tie(0);
//
//     scanf("%d", &T);
//     while(T --){
//         scanf("%d", &N);
//         for(int i = 0; i < N; i ++){
//             scanf("%d", &a[i]);
//             ++a[i];
//         }
//         scanf("%d", &L);
//         fill(ft, ft + me, 0);
//         int result = me;
//         for(int i = 0; i < N; i ++){
//             int g = get(a[i] - 1);
//             add(a[i], g + 1);
//             if(g + 1 >= L)
//                 result = min(result, a[i] - 1);
//         }
//         if(result == me)
//             result = -1;
//         printf("%d\n", result);
//     }
//
//
//     return 0;
// }

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
typedef priority_queue<int> pq; //maxHeap
typedef priority_queue <int, vector<int>, greater<int> > pqn; //minHEAP
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
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;
const int me = 1000025;
int T, N, L;
int a[me], ft[me];

void add(int pos, int value){
    for( ; pos < me; pos += (pos & -pos))
        ft[pos] = max(ft[pos], value);
}
int get(int pos){
    int s = 0;
    for( ; pos > 0; pos -= (pos & -pos))
        s = max(s, ft[pos]);
    return s;
}

int main(int argc, const char * argv[]) {
    //ios_base::sync_with_stdio(0);
    //cin.tie(0);

    scanf("%d", &T);
    while(T --){
        scanf("%d", &N);
        for(int i = 0; i < N; i ++){
            scanf("%d", &a[i]);
            ++a[i];
        }
        scanf("%d", &L);
        fill(ft, ft + me, 0);
        int result = me;
        for(int i = 0; i < N; i ++){
            int g = get(a[i] - 1);
            add(a[i], g + 1);
            if(g + 1 >= L)
                result = min(result, a[i] - 1);
        }
        if(result == me)
            result = -1;
        printf("%d\n", result);
    }


    return 0;
}
