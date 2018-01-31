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
string findSum(string str1, string str2)
{
    // Before proceeding further, make sure length
    // of str2 is larger.
    if (str1.length() > str2.length())
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate lenght of both string
    int n1 = str1.length(), n2 = str2.length();
    int diff = n2 - n1;

    // Initialy take carry zero
    int carry = 0;

    // Traverse from end of both strings
    for (int i=n1-1; i>=0; i--)
    {
        // Do school mathematics, compute sum of
        // current digits and carry
        int sum = ((str1[i]-'0') +
                   (str2[i+diff]-'0') +
                   carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining digits of str2[]
    for (int i=n2-n1-1; i>=0; i--)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    // Add remaining carry
    if (carry)
        str.push_back(carry+'0');

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
bool isSmaller(string str1, string str2)
{
    // Calculate lengths of both string
    int n1 = str1.length(), n2 = str2.length();

    if (n1 < n2)
       return true;
    if (n2 < n1)
       return false;

    for (int i=0; i<n1; i++)
       if (str1[i] < str2[i])
          return true;
       else if (str1[i] > str2[i])
          return false;

    return false;
}

// Function for find difference of larger numbers
string findDiff(string str1, string str2)
{
    // Before proceeding further, make sure str1
    // is not smaller
    if (isSmaller(str1, str2))
        swap(str1, str2);

    // Take an empty string for storing result
    string str = "";

    // Calculate length of both string
    int n1 = str1.length(), n2 = str2.length();

    // Reverse both of strings
    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;

    // Run loop till small string length
    // and subtract digit of str1 to str2
    for (int i=0; i<n2; i++)
    {
        // Do school mathematics, compute difference of
        // current digits
        int sub = ((str1[i]-'0')-(str2[i]-'0')-carry);

        // If subtraction is less then zero
        // we add then we add 10 into sub and
        // take carry as 1 for calculating next step
        if (sub < 0)
        {
            sub = sub + 10;
            carry = 1;
        }
        else
            carry = 0;

        str.push_back(sub + '0');
    }

    // subtract remaining digits of larger number
    for (int i=n2; i<n1; i++)
    {
        int sub = ((str1[i]-'0') - carry);
        carry = 0;
        str.push_back(sub + '0');
    }

    // reverse resultant string
    reverse(str.begin(), str.end());

    return str;
}
string trimZero(string s){
  string ans;
  if(s[0]=='0'){
    ans= s.substr(1,s.size()-1);
    return ans;
  }
  return s;
}

int main(){

    int n;cin>>n;
    cin.ignore();
    while(n--){


      string s;
      getline(cin,s);
      int i=0;
      int start =i;
      while(s[i] != '+'){
        i++;
      }
      string a = s.substr(start,i-1-start);
      i += 2;
      start =i;
      while(s[i] != '='){
        i++;
      }
      string b= s.substr(start,i-1-start);
      i += 2;
      start =i;
      while(s[i] != '\0'){
        i++;
      }
      string c= s.substr(start,i-start);
      // a is machula
      string ans;
      size_t founda = a.find("machula");
      if(founda != string::npos){
        ans = findDiff(c,b);
        ans=trimZero(ans);
        b=trimZero(b);
        c=trimZero(c);
        cout<<ans<<" + "<<b<<" = "<<c;NL;
      }
      // b is machula
      size_t foundb = b.find("machula");
      if(foundb != string::npos){
        ans = findDiff(c,a);
        a=trimZero(a);
        ans = trimZero(ans);
        c= trimZero(c);
        cout<<a<<" + "<<ans<<" = "<<c;NL;
      }
      // c is machula
      size_t foundc = c.find("machula");
      if(foundc != string::npos){
        ans = findSum(a,b);
        a= trimZero(a);
        b= trimZero(b);
        ans = trimZero(ans);
        cout<<a<<" + "<<b<<" = "<<ans;NL;
      }

    }
    zzz;
}
*/
/*
3
23 + 47 = machula
3247 + 5machula2 = 3749
machula13 + 75425 = 77038
*/
int MMstoi(string str)
{
	int num=0;
	for(int i=0;i<str.size();i++)
	{
		num=num*10+(int)(str[i]-48);
	}
	return num;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c;
		string str="machula";
		string str1,str2,str3;
		char ch1,ch2;
		cin>>str1>>ch1>>str2>>ch2>>str3;
		if(str1.find(str)!=-1)
		{
		   // cout<<"\n1\n";
		b=MMstoi(str2);
		c=MMstoi(str3);
		a=c-b;
		}
		else
		if(str2.find(str)!=-1)
		{
		  //  cout<<"\n2\n";
		a=MMstoi(str1);
		c=MMstoi(str3);
		b=c-a;
		}
		else
		{
		   // cout<<"\n3\n";
		a=MMstoi(str1);
		b=MMstoi(str2);
		c=b+a;
		}
		printf("%d + %d = %d\n",a,b,c);
	}

	return 0;
} 
