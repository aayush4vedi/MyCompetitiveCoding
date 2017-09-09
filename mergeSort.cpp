#include<bits/stdc++.h>
//#include <string.h>
using namespace std;

#define nl endl
#define ll long long
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> pii;
typedef vector<pii> vii;
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))

#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
inline ll Power(int b, int p) { ll ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }

const int MAX =101;

void merge(int a[], int l,int m, int r){

  int x[m-l+1],y[r-m];
  FOR(i,0, m-l+2){
    x[i]= a[l+i];
  }
  FOR(i,0,r-m+1){
    y[i]= a[m+1+i];
  }
  int i=0,j=0,k=l;
  while(i<= m-l && j<r-m){
    if(x[i] <= y[j]){
      a[k]= x[i];
      i++;
    }else{
      a[k]= y[j];
      j++;
    }
    k++;
  }
  while(i <= m-l){
    a[k]=x[i];i++;k++;
  }
  while(j< r-m){
    a[k]= y[j];k++;j++;
  }
}

void mergesort(int a[],int l, int r){
  if(l<r){
    int m = (l+r)/2;
    mergesort(a,l,m);mergesort(a,m+1,r);
    merge(a,l,m,r);
  }
}

int main(){
    int n;cin>>n;
    int a[n];FOR(i,0,n)cin>>a[i];

    mergesort(a,0,n);
    FOR(i,0,n){
      cout<<a[i]<<endl;
    }



    return 0;
}
