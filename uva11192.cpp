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

vector<int>::iterator j;

int main(){
	int n;
	while(cin>>n,n){
		string s;
		getline(cin, s);
		int l= strlen(s.c_str());
		int p=n/l;
		for(int j=1;j<=l;j+=p){
			for(int i=j+p-1;i>=i;i--){
				cout<<s[i];
			}
		}
		cout<<" ";
	}


	return 0;
	
}
