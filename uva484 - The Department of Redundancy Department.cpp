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


vector<int> order;
map<int, int> freq;

int main() {
	int n;

	while (scanf("%d", &n) != EOF) {
		if (freq.count(n) == 0) {
			freq[n] = 1;
			order.push_back(n);
		} else
			freq[n] = freq[n] + 1;
	}

	for(int i=0;i<(int)order.size();i++){
		printf("%d %d\n",order[i], freq[order[i]]);
	}

	return 0;
}
