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
lli sumOfDig(lli n){
 lli ans=0;
  while(n>0){
    ans += n%10;
    n = n/10;
  }
  return ans;
}



int main(){
  int m;
  lli s;
  cin>>m>>s;
  int n=m;
  int flag1 =0, flag2=0;
  lli l=1,h=1;
  while(n>1){
    l *= 10;n--;
  }
  n=m;
  while(n--){
    h *= 10;
  }
  h--;
  while(l<=h){
    if(sumOfDig(l)==s){
      flag1++;break;
    }else{
      l++;
    }
  }
  while(l<=h){
    if(sumOfDig(h)==s){
      flag2++;break;
    }else{
      h--;
    }
  }
  if(flag1 == 0)cout<<"-1 ";
  if(flag2 ==0)cout<<"-1\n";
  if(flag1 >0)cout<<l<<" ";
  if(flag2 >0)cout<<h<<"\n";
  //cout<<l<<" "<<h<<endl;
  //cout<<sumOfDig(h)<<endl;
  //cout<<flag1<<" "<<flag2<<endl;
  return 0;
}
