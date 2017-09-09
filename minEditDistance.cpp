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

/* To make use of recursive calls, this function must return
   two things:
   1) Length of LIS ending with element arr[n-1]. We use
      max_ending_here for this purpose
   2) Overall maximum as the LIS may end with an element
      before arr[n-1] max_ref is used this purpose.
   The value of LIS of full array of size n is stored in
   *max_ref which is our final result */
   int min(int x, int y, int z)
   {
       return min(min(x, y), z);
   }

   int editDistDP(string str1, string str2, int m, int n)
   {
       // Create a table to store results of subproblems
       int dp[m+1][n+1];

       // Fill d[][] in bottom up manner
       for (int i=0; i<=m; i++)
       {
           for (int j=0; j<=n; j++)
           {
               // If first string is empty, only option is to
               // isnert all characters of second string
               if (i==0)
                   dp[i][j] = j;  // Min. operations = j

               // If second string is empty, only option is to
               // remove all characters of second string
               else if (j==0)
                   dp[i][j] = i; // Min. operations = i

               // If last characters are same, ignore last char
               // and recur for remaining string
               else if (str1[i-1] == str2[j-1])
                   dp[i][j] = dp[i-1][j-1];

               // If last character are different, consider all
               // possibilities and find minimum
               else
                   dp[i][j] = 1 + min(dp[i][j-1],  // Insert
                                      dp[i-1][j],  // Remove
                                      dp[i-1][j-1]); // Replace
           }
       }

       return dp[m][n];
   }

// int main(){
//     int t;cin>>t;
//     while(t--){
//       int n,m;cin>>n>>m;
//       string x,y;
//       cin>>x>>y;
//       cout<<lcs(x,y)<<endl;
//     }
//
//     return 0;
// }
