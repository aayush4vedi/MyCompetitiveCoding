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


int main(){

	char line[100001];
	while (scanf("%s", line) != EOF) {
		list<char> l;
		int len = strlen(line);
		list<char>::iterator it = l.begin();

		for (int i = 0; i < len; i++) {
			if (line[i] == '[') {
				it = l.begin();
			} else if (line[i] == ']') {
				it = l.end();
			} else {
				l.insert(it, line[i]);
			}
		}

		for (it = l.begin(); it != l.end(); it++) {
			printf("%c", *it);
		}
		printf("\n");

	}

	return 0;
	
}

