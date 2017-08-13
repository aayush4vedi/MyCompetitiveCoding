#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define vb vector<bool>
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LL long long
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()

vector<int>::iterator j;


int main(){

	int n;cin>>n;
	map<string,string>slogan;
	while(n--){
		
		string s1,s2;
		cin>>s1>>s2;
		slogan[s1]=s2;

	}
	int t;cin>>t;
	while(t--){
		string s;
		cin>>s;
		cout<<slogan[s]<<endl;
	}


	return 0;
	
}

