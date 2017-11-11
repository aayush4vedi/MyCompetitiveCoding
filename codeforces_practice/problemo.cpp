#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vll;
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
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, N) for (int I = 0; I < (N); ++I)
#define VREP(I, N) for (int I = N-1; I >=0; I--)
#define REP1(I, N) for (int I = 1; I < (N); ++I)
#define REPV1(I, N) for (int I = N-1; I >=1; I--)
#define REPP(I, A, B) for (int I = (A); I < (B); ++I)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define RS(X) scanf("%s", (X))
#define DRA(a,n) int a[n]; REP(i,n)cin>>a[i]
#define l_b lower_bound
#define u_b upper_bound
#define MS0(X) memset((X), 0, sizeof((X)))
#define MS1(X) memset((X), -1, sizeof((X)))
#define LEN(X) strlen(X)
#define NL cout<<endl
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 1e6+10;
const int MAX = 1000;

int w[MAX][MAX];
int a[MAX*MAX],b[MAX*MAX],c[MAX*MAX];


//444.A
/*
int main(){
  string s;cin>>s;
  int cnt=0;
  int flag=0;
  VREP(i, s.length()){
    if(s[i]=='0')cnt++;
    else if(s[i]=='1' && cnt>=6)flag++;
  }
  if(flag>0)cout<<"yes\n";
  else cout<<"no\n";
  return 0;

}
*/
//444.B
/*
bool check_elements(int arr[], int n, int A, int B)
{
    // Range is the no. of elements that are
    // to be checked
    int range = B - A;

    // Traversing the array
    for (int i = 0; i < n; i++) {

        // If an element is in range
        if (abs(arr[i]) >= A && abs(arr[i]) <= B) {

            // Negating at index ‘element – A’
            int z = abs(arr[i]) - A;
            if (arr[z] > 0) {
                arr[z] = arr[z] * -1;
            }
        }
    }

    // Checking whether elements in range 0-range
    // are negative
    int count=0;
    for (int i = 0; i <= range && i<n; i++) {

        // Element from range is missing from array
        if (arr[i] > 0)
            return false;
        else
            count++;
    }
     if(count!= (range+1))
        return false;
    // All range elements are present
    return true;
}
void mergeArrays(int arr1[], int arr2[], int n1,
                             int n2, int arr3[])
{
    int i = 0, j = 0, k = 0;

    // Traverse both array
    while (i<n1 && j <n2)
    {
        // Check if current element of first
        // array is smaller than current element
        // of second array. If yes, store first
        // array element and increment first array
        // index. Otherwise do same with second array
        if (arr1[i] < arr2[j])
            arr3[k++] = arr1[i++];
        else
            arr3[k++] = arr2[j++];
    }

    // Store remaining elements of first array
    while (i < n1)
        arr3[k++] = arr1[i++];

    // Store remaining elements of second array
    while (j < n2)
        arr3[k++] = arr2[j++];
}
bool isRepeating(int a[], int n, int x){
  int m= l_b(a,a+n,x) -a;
  if(a[m+1]==x)return true;
  else return false;
}
int main(){
  int n;cin>>n;
  if(n==3){

    DRA(a,6);sort(a,a+6);reverse(a,a+6);
    DRA(b,6);sort(b,b+6);reverse(b,b+6);
    DRA(c,6);sort(a,a+6);reverse(c,c+6);
    REP(i,6)cout<<a[i]<<" ";
    NL;
    REP(i,6)cout<<b[i]<<" ";
    NL;
    REP(i,6)cout<<c[i]<<" ";
    NL;
    if(a[0]>b[0])REP(i,6)swap(a[i],b[i]);
    if(b[0]>c[0])REP(i,6)swap(b[i],c[i]);
    if(c[0]>a[0])REP(i,6)swap(c[i],a[i]);
    int ans=0;

    int d[12];
    int flag1=0,flag2=0,flag3=0;
    mergeArrays(b,c,6,6,d);
    REP(i,12)cout<<d[i]<<" ";
    NL;
    if(check_elements(d,12,0,9)){
      ans = a[0]*10 + d[12];
    }else{
      ans = a[0]*10 + d[12];
      flag1 ++;
    }
    if(flag1 ==0){
      //TODO merger a,c
      mergeArrays(a,c,6,6,d);
      if(check_elements(d,12,0,9)){
        ans = b[0]*10 + d[12];
      }else{
        ans = b[0]*10 + d[12];
        flag2 ++;
      }
    }
    if(flag2 ==0){
      //TODO merge a,b
      mergeArrays(a,b,6,6,d);
      if(check_elements(d,12,0,9)){
        ans = c[0]*10 + d[12];
      }else{
        ans = c[0]*10 + d[12];
        flag3 ++;
      }
    }
    cout<<ans;
    NL;
  }
  //TODO n=2
  if(n==2){
    DRA(a,6);sort(a,a+6);reverse(a,a+6);
    DRA(b,6);sort(b,b+6);reverse(b,b+6);
    int d[12];
    int ans=0;
    mergeArrays(a,b,6,6,d);
    if(check_elements(d,12,0,9)){
      ans =10;
      int jh=1;
      if(isRepeating(d,12,1))ans = 21;
      else jh=0;
      if(isRepeating(d,12,2) && jh){ans = 32;}
      if(! isRepeating(d,12,2))jh++;
      if(isRepeating(d,12,3) && jh){ans = 43;}
      if(! isRepeating(d,12,3))jh++;
      if(isRepeating(d,12,4) && jh){ans = 54;}
      if(! isRepeating(d,12,4))jh++;
      if(isRepeating(d,12,5) && jh){ans = 65;}
      if(! isRepeating(d,12,5))jh++;
      if(isRepeating(d,12,6) && jh){ans = 76;}
      if(! isRepeating(d,12,6))jh++;
      if(isRepeating(d,12,7) && jh){ans = 78;}
      if(! isRepeating(d,12,7))jh++;

    }else{
      ans = d[12];

    }
    cout<<ans;
    NL;
  }
  //TODO n=1
  if(n==1){
    DRA(a,6);sort(a,a+6);reverse(a,a+6);
    int ans =0;
    REP1(i,9){
      if(check_elements(a,6,0,i))ans=i;
    }
    cout<<ans;
    NL;

  }
  return 0;

}
*/
//444.C
