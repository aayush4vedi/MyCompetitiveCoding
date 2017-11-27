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

char A [100], Len;
 
    while (scanf ("%s", A )) {
 
        if ( A [0] == '#' )
            break;
 
        Len = strlen (A);
 
        if (next_permutation (A, A + Len) )
            printf("%s\n", A);
        else
            printf("No Successor\n");
    }

	return 0;
	
}

