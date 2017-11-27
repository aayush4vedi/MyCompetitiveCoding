#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float n, sd, k = 0;
        float a;
        cin>>n>>sd;
        if(n==1 && sd != 0){
          cout<<"-1\n";
        }else if(n==1 && sd == 0){
          cout<<"1\n";
        }else{
          a = (sd * n) / sqrt(n-1);
          for(int i = 0; i<n-1; i++)
          {
              cout.precision(10);
              cout<<k<<" ";
          }
          cout.precision(10);
          cout<<a<<endl;
        }


    }
    return 0;
}
