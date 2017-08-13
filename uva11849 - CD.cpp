#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define vb vector<bool>
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LL long long
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()

vector<int>::iterator j;

int main () {
  int m,n,i,x;
  VI a,b;
  vector<int> v(2000000);
  vector<int>::iterator it;
  cin >> m >> n;
  while(m!=0&&n!=0){
      for(i = 0; i<m;i++) {cin >> x;a.push_back(x);}
      for(i = 0; i<n;i++) {cin >> x;b.push_back(x);}
      //sort (a.begin(),a.end());
      //sort (b.begin(),b.end());
      it=set_intersection(a.begin(), a.end(), b.begin(), b.end(), v.begin());
      cout << int(it - v.begin()) << endl;
      cin >> m >> n;
      a.clear();
      b.clear();
      v.clear();
  }

  return 0;
}
