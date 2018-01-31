#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define REP(I, A, B) for (int I = (A); I < (B); ++I)

#define DRI(X) int (X); scanf("%d", &X)


int power(lli a, lli b){
  int ans=1,tmp = a%10;
  while(b){
    if(b%2 != 0){
      ans = (ans*tmp)%10;
    }
    b = b/2;
    tmp = (tmp*tmp)%10;
  }
  // if(b==0)return 1;
  // else if( b%2 == 0){
  //     return power(a*a, b/2)%10;
  // }else{
  //     return (a*(power(a*a,(b-1)/2)))%10;
  // }
  return ans;

}

int main(){
  DRI(t);
  while(t--){
    lli b;
    string a;
    cin>>a>>b;
    int c=a[a.size()-1] -'0';
    cout<<power(c,b);cout<<endl;
  }
  return 0;
}
