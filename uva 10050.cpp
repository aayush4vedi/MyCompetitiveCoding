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
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		vb days(n, true);//days[i] == true means no hartal
		int p;cin>>p;
		vi h(p);
		FOR(i,0,p){
			int x;cin>>x;
			for(int j=1;x*j <=n;j++){
				if((days[x*j]%6 !=0) || ((days[x*j]%7 !=0))){
					days[x*j] = false;
				}
			}
		}
		int cnt=0;
		FOR(i,0,n){
			if(days[i] == true)
				cnt++;
		}
		cout<<cnt<<'\n';

	}


	return 0;
	
}
