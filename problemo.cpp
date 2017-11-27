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
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

const int MAX = 1000;


int main(){
    int ax,bx,ay,by,cx,cy,xx,xy,yx,yy;//pointnme_cordin
    cin>>ax>>ay>>bx>>by>>cx>>cy>>xx>>xy>>yx>>yy;
    int dab=abs(ax-bx)+abs(ay-by);
    int dac = abs(ax-cx)+abs(ay-cy);
    int dcyyb = abs(cx-yx)+abs(cy-yy)+abs(yx-bx)+abs(yy-by);
    int dcxxb = abs(cx-xx)+abs(cy-xy)+abs(xx-bx)+abs(xy-by);
    if(((dac+dcyyb)>2*dab)&&((dac+dcxxb)>2*dab)){
      cout<<"-1\n";
    }else if((dac+dcyyb)<(dac+dcxxb)){
      cout<<"2\n";
    }else{
      cout<<"1\n";
    }


  return 0;
}
