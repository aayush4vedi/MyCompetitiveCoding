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

//const int MAX =101;

// int noOfEncoding(char *s, int n){
//   if(n==0 || n==1) return 1;
//   int count =0;
//   if(s[n-1] > '0') count = noOfEncoding(s, n-1);
//   if(s[n-2] =='1' || (s[n-2] == '2' && s[n-1] < '7') count += noOfEncoding(s, n-2);
//
//   return count ;
// }
// bool lcs(string a, string b){
//   int n = a.length();
//   int m = b.length();
//   int d[n+1][m+1];
//   FOR(i,0,n+1){
//     FOR(j,0,m+1){
//       if(i==0 || j==0) d[i][j]=0;
//       else if(a[i-1]== b[j-1]) d[i][j]= 1+ d[i-1][j-1];
//       else d[i][j]= max(d[i-1][j], d[i][j-1]);
//     }
//   }
//   if(d[n][m]>0) return true;
//   else return false;
//
// }
//
// int main(){
//
//     int t;cin>>t;
//     while(t--){
//       int n;cin>>n;
//       int a[n];FOR(i,0,n)cin>>a[i];
//       int p;cin>>p;
//       int buy = a[0], curr =0;
//       FOR(i,1,n){
//         if( a[i-1] - a[i] >=0){
//           curr +=  a[i-1] - a[i];
//         }else{
//           curr +=  a[i-1] - a[i];
//           if(curr < 0){
//             buy += a[i]- a[i-1];
//             curr =0;
//           }
//         }
//       }
//       cout<<buy*p;
//
//       cout<<endl;
//     }
//     return 0;
// }
// int threesum(int a[], int n,int x){
//   int cnt =0;
//   FOR(i,0,n-2){
//     int j=i+1;
//     int k = n-1;
//     while( j<k ){
//       //if( a[i]+ a[j]+ a[k] == x ) {cnt++;}
//       if(a[i]+ a[j]+ a[k] < x ){
//         cnt += k-j;
//         j++;
//       }else{
//         k--;
//       }
//
//     }
//
//   }
//
//
//   return cnt;
// }
//
// int main(){
//   int t;cin>>t;
//   while(t--){
//     int n;cin>>n;
//     int x;cin>>x;
//     int a[n];
//     FOR(i,0,n)cin>>a[i];
//     cout<<"done\n";
//     cout<< threesum(a,n,x)<<'\n';
//   }
//
//
// }

/*Minimum Substring Window*/
// int main() {
// 	//code
// 	 int k;
//     cin>>k;
//     while(k--)
//     {
//         int x=1000;
//         string s;
//         set<char> s1;
//         set<char> s2;
//         cin>>s;
//         int p=s.length();
//         for(int i=0;i<p;i++)
//         s1.insert(s[i]);
//         for(int i=0;i<p;i++)
//         {
//             int g=0;
//             s2=s1;
//             for(int j=i;j<p;j++)
//             {
//                 g++;
//                 if(s1.find(s[j])!=s1.end())
//                 s2.erase(s[j]);
//                 if(s2.empty())
//                 break;
//             }
//             if(s2.empty())
//             x=min(g,x);
//         }
//         s1.clear();
//         cout<<x<<"\n";
//
//     }
// 	return 0;
// }
//

/*Rotton Oranges*/
// int main() {
// 	//code
// 	int t;
// 	cin>>t;
// 	for(int i=0;i<t;i++)
// 	{
// 	    int r,c;
// 	    cin>>r>>c;
// 	    int arr[r][c];
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            cin>>arr[j][k];
// 	        }
// 	    }
// 	    queue<pair<int,int>> q;
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            pair<int,int> p;
// 	            if(arr[j][k]==2){
// 	            if(k!=0){
// 	                if(arr[j][k-1]==1){
// 	                arr[j][k-1]=3;
// 	                p.first=j;
// 	                p.second=k-1;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=0){
// 	                if(arr[j-1][k]==1){
// 	                arr[j-1][k]=3;
// 	                p.first=j-1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=r-1)
// 	            {
// 	                if(arr[j+1][k]==1){
// 	                arr[j+1][k]=3;
// 	                p.first=j+1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(k!=c-1){
// 	                if(arr[j][k+1]==1){
// 	                arr[j][k+1]=3;
// 	                p.first=j;
// 	                p.second=k+1;
// 	                q.push(p);
// 	                }
// 	            }
// 	        }}
// 	    }
//
// 	    pair<int,int> pq(-1,-1);
// 	    //cout<<q.size()<<endl;
// 	    int count=0;
// 	    q.push(pq);
// 	  while(q.size()>1){
// 	        while(q.front()!=pq){
// 	            int j=q.front().first;
// 	            int k=q.front().second;
// 	            pair<int,int> p;
// 	            if(k!=0){
// 	                if(arr[j][k-1]==1){
// 	                arr[j][k-1]=3;
// 	                p.first=j;
// 	                p.second=k-1;
// 	                q.push(p);
// 	                }
// 	            }
// 	           if(j!=0){
// 	                if(arr[j-1][k]==1){
// 	                arr[j-1][k]=3;
// 	                p.first=j-1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(j!=r-1)
// 	            {
// 	                if(arr[j+1][k]==1){
// 	                arr[j+1][k]=3;
// 	                p.first=j+1;
// 	                p.second=k;
// 	                q.push(p);
// 	                }
// 	            }
// 	            if(k!=c-1){
// 	                if(arr[j][k+1]==1){
// 	                arr[j][k+1]=3;
// 	                p.first=j;
// 	                p.second=k+1;
// 	                q.push(p);
// 	                }
// 	            }
// 	            q.pop();
//
// 	        }
// 	        count++;
// 	        q.push(pq);
// 	        q.pop();
//
// 	        if(q.size()==1)
// 	        break;
// 	    }
// 	    for(int j=0;j<r;j++){
// 	        for(int k=0;k<c;k++){
// 	            if(arr[j][k]==1)
// 	            count=-1;
// 	        }
//
// 	    }
//
// 	    cout<<count<<endl;
//
//
// 	}
// 	return 0;
// }
//
// int palindromicpartitioning(string s){
//   int n= s.length();
//   int d[n][n];
//   bool p[n][n];
//   FOR(i,0,n+1){
//     d[i][i] = 0;
//     p[i][i]= true;
//   }
//   FOR(l,2,n+1){
//     FOR(i,0,n-l+1){
//       int j= i+l-1;//endling index
//       if(l==2) p[i][j] = (s[i]==s[j]);
//       else p[i][j] = (s[i]== s[j]) && (p[i+1][j-1]);
//
//       if(p[i][j] == true) d[i][j]=0;
//       else{
//         d[i][j] = INT_MAX;
//                for (int k=i; k<=j-1; k++)
//                    d[i][j] = min (d[i][j], d[i][k] + d[k+1][j]+1);
//       }
//     }
//   }
//   return d[0][n-1];
//
// }
//
// int main(){
//   int t;cin>>t;
//   while(t--){
//     string s;
//     cin>>s;
//     cout<<palindromicpartitioning(s)<<endl;
//   }
//   return 0;
// }

/*stocks buy and sell*/
// int main(void) {
//     int t;
//     cin >> t;
//
//     while(t--) {
//         int n;
//         cin >> n;
//
//         vector<int> costs(n);
//         for(int i = 0; i < n; ++i) {
//             cin >> costs[i];
//         }
//
//         vector<bool> local_max(n, true);
//         for(int i = 0; i < n; ++i) {
//             if(i - 1 >= 0 && costs[i-1] > costs[i])
//                 local_max[i] = false;
//             if(i + 1 < n && costs[i+1] > costs[i])
//                 local_max[i] = false;
//         }
//
//         vector<bool> local_min(n, true);
//         for(int i = 0; i < n; ++i) {
//             if(i - 1 >= 0 && costs[i-1] < costs[i])
//                 local_min[i] = false;
//             if(i + 1 < n && costs[i+1] < costs[i])
//                 local_min[i] = false;
//         }
//         local_min[n-1] = false;
//
//         // for(int i = 0; i < n; ++i) {
//         //     cout << "(" << local_min[i] << ", " << local_max[i] << ")" << endl;
//         // }
//
//         vector<pair<int, int>> ans;
//
//         int at = 0;
//         while(at < n) {
//             // find local min
//             while(at < n && local_min[at] == false)
//                 ++at;
//
//             if(at == n)
//                 break;
//
//             int mi = at;
//
//             while(at < n && local_max[at] == false)
//                 ++at;
//
//             if(at == n)
//                 ans.push_back({mi, at-1});
//             else
//                 ans.push_back({mi, at});
//         }
//
//         if(ans.empty())
//             cout << "No Profit" << endl;
//         else{
//             for(auto &p: ans) {
//                 cout << "(" << p.first << " " << p.second << ")" << " ";
//             }
//             cout << endl;
//         }
//     }
// }
