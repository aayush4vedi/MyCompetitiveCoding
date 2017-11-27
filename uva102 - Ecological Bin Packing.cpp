#include<bits/stdc++.h>
#include <string.h>
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
typedef vector<vector<int> > vvc;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> ii; 
typedef vector<ii> vii;
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
inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }


vector<int>::iterator j;


using namespace std;
 
int main(){
int b1,g1,c1,b2,g2,c2,b3,g3,c3,i,a[6],min;
while(cin>>b1>>g1>>c1>>b2>>g2>>c2>>b3>>g3>>c3)
    {
    a[0]=b2+b3+c1+c3+g1+g2;
    a[1]=b2+b3+c1+c2+g1+g3;
    a[2]=b1+b3+c2+c3+g1+g2;
    a[3]=b1+b2+c2+c3+g1+g3;
    a[4]=b1+b3+c1+c2+g3+g2;
    a[5]=b2+b1+c1+c3+g3+g2;
    for(i=0;i<6;i++)
        {
        if(i==0) min=a[i];
        else if(min>a[i]) min=a[i];
        }
    for(i=0;i<6;i++)
        {
        if(a[i]==min) {
                      if(i==0) cout<<"BCG ";
                      else if(i==1) cout<<"BGC ";
                      else if(i==2) cout<<"CBG ";
                      else if(i==3) cout<<"CGB ";
                      else if(i==4) cout<<"GBC ";
                      else if(i==5) cout<<"GCB ";
                      cout<<a[i]<<endl;
                      break;
                      }
        }
    }

	return 0;
}