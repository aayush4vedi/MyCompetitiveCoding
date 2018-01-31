#include<bits/stdc++.h>

using namespace std;
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define NL cout<<endl


int modularExponentiation(int x,int n,int M)
 {
     if(n==0)
         return 1;
     else if(n%2 == 0)        //n is even
         return modularExponentiation((x*x)%M,n/2,M);
     else                             //n is odd
         return (x*modularExponentiation((x*x)%M,(n-1)/2,M))%M;

 }

int main(){
  DRI(t);
  while(t--){
    DRII(a,b);
    cout<<modularExponentiation(a,b,10);NL;
  }
  return 0;
}
