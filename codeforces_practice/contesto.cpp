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
#define pf push_front
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
	int a[3];FOR(i,0,3)cin>>a[i];
	//sort(a,a+2);
	int dist=0;
	int eaten =1;
	int i=0;
	int x = min(b,a);
	while(eaten <n){
		eaten ++;
		dist += x;
		if(x==b){
			x= min(a,c);
		}if(x==a){
			x = min(b,c);
		}if(x==c){
			x = min(a,c)
		}
	}



	return 0;
}
/**/
//B
/*
int main() {
	int n,k,m;cin>>n>>k>>m;
	int a[n];FOR(i,0,n)cin>>a[i];
	vi v;
	int flag=1;
	FOR(i,0,n){
		//cout<<"h\n";
		for(int j=0;i<n, j!= i;j++){
			if(abs(a[i]-a[j])%m ==0 && v.size() <n){
				int x=a[i],y=a[j];
				v.pb(x);
				v.pb(y);
				flag++;
			}
		}
	}

	if(flag != k)cout<<"No\n";
	else{
		cout<<"Yes\n";
		reverse(v.begin(),v.end());
		for(vector<int>::iterator j = v.begin(); j!=v.end();j++){
			cout<< *j <<" ";
		}
		cout<<endl;

	}

	return 0;
}
/**/
//C
/**/
int sumOfDig(int n){
	int ans =0;
	while(n>0){
		ans += n%10;n /=10;
	}
	return ans;

}
int main() {
	int n;cin>>n;
	vi v;
	int flag =0;
	FOR(i,0,n){
		if(sumOfDig(i)+i == n){
			flag++;v.pb(i);
		}
	}
	if(flag ==0)cout<<"0\n";
	else{
		cout<<flag<<endl;
		reverse(v.begin(),v.end());
		for(vector<int>::iterator j = v.begin(); j!=v.end();j++){
			cout<< *j <<endl;
		}
	}
	return 0;
}
/**/
//D
/*
int main() {

	return 0;
}
/**/

//E
/*
int main() {

	return 0;
}
/**/

//F
/*
int main() {

	return 0;
}
/**/
