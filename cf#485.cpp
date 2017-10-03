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

const int MAX_N = 100;

//1.
/**/
int main() {
	vi v;
  map<int, int>m;
  int t;cin>>t;
  while(t--){
    int n;cin>>n;
    if(m.count(n) ==0){
      m[n]=1;
      v.pb(n);
    }
    else{
      m[n]++;
    }
  }
  if(m.size() ==2 ){
    if(m[v[0]] == m[v[1]]){
      cout<<"YES\n";
      cout<<v[0]<<" "<<v[1]<<endl;
    }
    else{
      cout<<"NO\n";
    }
  }else{
    cout<<"NO\n";
  }



	return 0;
}
/**/
//3.
/*
int main() {
  int a,b,f,k;
  cin>>a>>b>>f>>k;
  int count=0;
  int fuel =b;
  if((2*f > b) || 2*(a-f) > b){
    cout<<"-1\n";
  }
  else{
  FOR(i,0,k){
    if(k%2 ==0){
      if(2*a -f >= fuel){
        count++;
      }
      fuel -=a;
    }else{
      if(fuel <= a-f){
        count++;
        fuel -= (a-f);
      }else{
        fuel -= a;
      }
    }
  }
  cout<<count<<endl;
}

	return 0;
}
/**/
//3.
/*
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{


	}
	return 0;
}
/**/
//6.
/*
int main() {
	int n;cin>>n;
  string s;
  cin>>s;
  int i=0;
  int count=0;
  FOR(i,0,n+1){
    if(s[i]>=97 && s[i]<=122){

      FOR(j,i+1,n+1){
        if(s[i] !=s[j] && s[j]>=97 && s[j]<=122){
          count = max(count, j-i+1);
        }else if( s[j]>=65 && s[j]<= 90 ){
          i=j+1;
          // count =1;
        }
      }
    }

  }
  cout<<count<<endl;
	return 0;
}

/**/
