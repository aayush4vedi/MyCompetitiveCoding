#include <iostream>
using namespace std;
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define NL cout<<endl
#define lli long long int

int main() {
	int t;cin>>t;
	while(t--){
		DRLLILLILLI(a,l,s);
	    lli n = (2*s)/(a+l);
      cout<<n;NL;
	    lli d = (l-a)/(n-6);
	    lli f = a -2*d;
	    REP(i,0,n){
	      cout<<f+i*d<<" ";
	    }
	    NL;
	}
	return 0;
}
