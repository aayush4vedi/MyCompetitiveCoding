#include<bits/stdc++.h>

using namespace std;

#define nl endl
#define lli long long int
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<lli> vlli;
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
typedef pair<lli, lli> pllilli;
typedef vector<pii> vii;
typedef vector<pllilli> vllilli;
//vector<int>::iterator j;
#define REPV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
//#define pf push_front
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define SZ(X) ((int)(X).size())
#define ALL(X) (X).begin(), (X).end()
#define REP(I, A, B) for (int I = (A); I < (B); ++I)
#define REPR(I, A, B) for (int I = (B); I > (A); I--)
#define RI(X) scanf("%d", &(X))
#define RII(X, Y) scanf("%d%d", &(X), &(Y))
#define RIII(X, Y, Z) scanf("%d%d%d", &(X), &(Y), &(Z))
#define DRI(X) int (X); scanf("%d", &X)
#define DRLLI(X) lli (X); scanf("%lld", &X)
#define DRII(X, Y) int X, Y; scanf("%d%d", &X, &Y)
#define DRLLILLI(X, Y) lli X, Y; scanf("%lld%lld", &X, &Y)
#define DRIII(X, Y, Z) int X, Y, Z; scanf("%d%d%d", &X, &Y, &Z)
#define DRLLILLILLI(X, Y, Z) lli X, Y, Z; scanf("%lld%lld%lld", &X, &Y, &Z)
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
#define zzz return 0
inline lli Power(int b, int p) { lli ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }
const int MOD = 1e9+7;
const int SIZE = 4e6+10;
const int MAX = 1e9+1;

/*
bool allNine(vector<int >& a, int n){
  REP(i,0,n){
    if(a[i] != 9)return false;
  }
  return true;
}
bool isPalidrome(vector<int >& a,int n){
  int i=0,j=n-1;
  while(i!=j){
    if(a[i]!=a[j])return false;
    else{i++;j--;}
  }
  return true;
}
*/
int AreAll9s (int num[], int n );
void printArray(int arr[], int n);
// Returns next palindrome of a given number num[].
// This function is for input type 2 and 3
void generateNextPalindromeUtil (int num[], int n )
{
    // find the index of mid digit
    int mid = n/2;

    // A bool variable to check if copy of left side to right is sufficient or not
    bool leftsmaller = false;

    // end of left side is always 'mid -1'
    int i = mid - 1;

    // Begining of right side depends if n is odd or even
    int j = (n % 2)? mid + 1 : mid;

   // Initially, ignore the middle same digits
    while (i >= 0 && num[i] == num[j])
        i--,j++;

    // Find if the middle digit(s) need to be incremented or not (or copying left
    // side is not sufficient)
    if ( i < 0 || num[i] < num[j])
        leftsmaller = true;

    // Copy the mirror of left to tight
    while (i >= 0)
    {
        num[j] = num[i];
        j++;
        i--;
    }

    // Handle the case where middle digit(s) must be incremented.
    // This part of code is for CASE 1 and CASE 2.2
    if (leftsmaller == true)
    {
        int carry = 1;
        i = mid - 1;

        // If there are odd digits, then increment
        // the middle digit and store the carry
        if (n%2 == 1)
        {
            num[mid] += carry;
            carry = num[mid] / 10;
            num[mid] %= 10;
            j = mid + 1;
        }
        else
            j = mid;

        // Add 1 to the rightmost digit of the left side, propagate the carry
        // towards MSB digit and simultaneously copying mirror of the left side
        // to the right side.
        while (i >= 0)
        {
            num[i] += carry;
            carry = num[i] / 10;
            num[i] %= 10;
            num[j++] = num[i--]; // copy mirror to right
        }
    }
}

// The function that prints next palindrome of a given number num[]
// with n digits.
void generateNextPalindrome( int num[], int n )
{
    int i;

    //printf("nNext palindrome is:n");

    // Input type 1: All the digits are 9, simply o/p 1
    // followed by n-1 0's followed by 1.
    if( AreAll9s( num, n ) )
    {
        printf( "1");
        for( i = 1; i < n; i++ )
            printf( "0" );
        printf( "1\n" );
    }

    // Input type 2 and 3
    else
    {
        generateNextPalindromeUtil ( num, n );


        printArray (num, n);
    }
}

int AreAll9s( int* num, int n )
{
    int i;
    for( i = 0; i < n; ++i )
        if( num[i] != 9 )
            return 0;
    return 1;
}


void printArray(int arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%d", arr[i]);
    NL;
}

int main(){
  DRI(t);
  while(t--){
    string s;cin>>s;
    int n = s.length();
    int num[n];
    REP(i,0,n){
      num[i]= s[i]-'0';
    }
    generateNextPalindrome( num, n );
  }
    zzz;
    /*
    //case1:all nine
    if(allNine(a,n)){
      n++;
      a[0]=a[n]=1;
      REP(i,1,n)a[i]=0;
    }
    //case2: isPalidrome
    if(isPalindrome(a,n)){
      //n even:add to mid eles
      if((x&1)==0){
        int carry =1;
        int mid = n/2 ;
        for(int i=mid-1;i>=0;i--){
          v[i]= (v[i]+carry)%10;
          carry = (v[i]+carry)/10;
        }if(carry ==1)v.insert(v.begin(),1);
        carry =1;
        for(int i=mid;i<n;i++){
          v[i]= (v[i]+carry)%10;
          carry = (v[i]+carry)/10;
        }if(carry ==1)v.insert(v.end(),1);
      }
      //n odd:add to mid ele
      else{
        int mid = n/2 +1;

        if((v[mid-1]+1)/10 ==0){
          v[mid-1] = v[mid-1]+1;
        }else{
          int carry =1;
          for(int i=mid-2;i>=0;i--){
            v[i]= (v[i]+carry)%10;
            carry = (v[i]+carry)/10;
          }if(carry ==1)v.insert(v.begin(),1);
          carry =1;
          for(int i=mid;i<n;i++){
            v[i]= (v[i]+carry)%10;
            carry = (v[i]+carry)/10;
          }if(carry ==1)v.insert(v.end(),1);
        }
      }
    }
    //case 3.not Palindorme
    else{
      //case 3.1: L' > R
      for(int i=0,j=n-1;)
    }

  }

  zzz;
  */
}
