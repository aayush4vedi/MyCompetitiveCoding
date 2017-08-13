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

	int n;cin>>n;
	while(n--){
		int s, a, f;
        scanf ("%d %d %d", &s, &a, &f);
 
        int p [50000 + 5];
        int q [50000 + 5];
 
        for ( int i = 0; i < f; i++ )
            scanf ("%d %d", &p [i], &q [i]);
 
        sort (p, p + f);
        sort (q, q + f);
 
        if ( f % 2 ) printf ("(Street: %d, Avenue: %d)\n", p [f / 2], q [f / 2]);
        else printf ("(Street: %d, Avenue: %d)\n", p [(f - 1) / 2], q [(f - 1) / 2]);
    }


	return 0;
	
}

