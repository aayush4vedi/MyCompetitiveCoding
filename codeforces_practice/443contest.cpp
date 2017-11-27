#include<bits/stdc++.h>
//#include <string.h>
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
typedef stack<int> si;
typedef queue<int> qi;
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

const int MAX_N = 100;

//A.
/*
int main() {
	int n;cin>>n;
	lli t;cin>>t;
	lli x=86400;
	lli b=0;
	int cnt=0;
	FOR(i,0,n){
		lli a;cin>>a;
		b += x-a;
		cnt++;
		if(b== t){
			cout<<cnt<<endl;
			break;
		}
	}


	return 0;
}
/**/
//B
/*
int main() {
	int n,x;cin>>n>>x;int sum=n-1;
	FOR(i,0,n){
		int a;cin>>a;
		sum +=a;
	}
	if(sum ==x)cout<<"YES\n";
	else cout<<"NO\n";

	return 0;
}
/**/
//C
/*
int main() {

	return 0;
}
/**/
//D
/**/
int main() {
	int n;cin>>n;
	int a[n];
	int sum=0;
	FOR(i,0,n){
		cin>>a[i];
		sum += a[i];
	}
	sort(a,a+n);
	if(n==1) cout<<"1\n";
	else{
		int cost=sum;
	}
	return 0;
}
/**/

//6
/*
int main() {

	return 0;
}
/**/
