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

vector<int>::iterator j;

int main(){
	
	  int T, C = 1;
  scanf("%d", &T);
  while (T--) {
    int N, p[100001], q[100001], sum[100001] = {};
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
      scanf("%d", &p[i]);
      if (i) {
        sum[i] = sum[i - 1] + p[i];
      } else {
        sum[i] = p[i];
      }
    }
    for (int i = 0; i < N; i++) {
      scanf("%d", &q[i]);
    }
    int start = 0, need = 0, minus = 0, available  = 0;
    for (int i = 0; i < N; i++) {
      need += q[i];
      available = sum[i] - minus;
      if (need > available) {
        need = 0;
        if (q[i] > p[i]) {
          start = i + 1;
          minus = sum[i];
        } else {
          start = i;
          minus = sum[i] - p[i];
          i--;
        }
      }
    }
    bool possible = need <= available;
    for (int i = 0; i < start && possible; i++) {
      need += q[i];
      available += p[i];
      if (need > available) {
        possible = false;
      }
    }
    printf("Case %d: ", C++);
    if (possible) {
      printf("Possible from station %d\n", start + 1);
    } else {
      puts("Not possible");
    }
  }


	return 0;
	
}
