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

	int n;
    while(scanf("%d", &n) == 1) {
        int old = 0, young = 22222222;
        string oa, ya, name;
        int dd, mm, yy;
        while(n--) {
            cin >> name >> dd >> mm >> yy;
            dd = dd+mm*100+yy*10000;
            if(dd > old)    old = dd, oa = name;
            if(dd < young)  young = dd, ya = name;
        }
        cout << oa << endl;
        cout << ya << endl;
    }

	return 0;
	
}

