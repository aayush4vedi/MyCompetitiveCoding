#include<bits/stdc++.h>

using namespace std;
int main()
{
int n; cin>>n;int a[n];
for(int i=0; i<n; i++)
{
  cin>>a[i];
}
int target;
cin>>target; int c[n/3];
for(int k=0; k<n/3; k++)
{for(int i=0; i<n-3; i+3)

   {int sum=a[i]+a[i+1]+a[i+2];

  c[k]=abs(sum-target);
}
}

sort(c, c+n/3);
cout<<c[0]<<endl;
return 0;
  }
  /*
  for(int j=0; j<n2; j++)
  {
    cin>>b[j];
  }
  /*
  int n=min(n1 , n2);
  // if(n1>n2){n=n2;}
  // else{n=n1;}

  int c[n];int k=0;
  int i=0, j=0;
for(int i=0; i<max(n1, n2); i++)
{
  for(int j=0; j<min(n1, n2); j++)

    {if(a[i]==b[j])
    {
      c[k++]=b[j];
      cout<<b[j]<<endl;
      //i++;
    }

    i++; j++;

}
// while(i<n1)
// {
//   c[k++]=a[i++];
//   i++;
// }
// while(j<n2)
// {
//   c[k++]=b[j++];
//   j++;
// }

for(int i=0; i<n; i++)
{
  cout<<c[i]<<" ";
}
*/
