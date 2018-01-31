#include<bits/stdc++.h>

using namespace std;
/*
int main(){
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    if(n==0){cout<<"0\n";}else if(n==1){ cout<<"1\n";}else{
      int ans = n*n +1;
      n= n-2;
      int i=1;
      while(i<=n){
        ans += 3*i*(n-i+1);
        i++;
      }
      cout<<ans;cout<<"\n";
    }
  }
  return 0;
}
*/


int main(){
  int t;cin>>t;
  while(t--){
    long long unsigned num,sum;
       scanf("%llu",&num);
       if(num%2==0)
       sum=(num*(num+2)*((2*num)+1))/8;
       else
       sum=((num*(num+2)*((2*num)+1))-1)/8;
       printf("%llu\n",sum);
  }
  return 0;
}
