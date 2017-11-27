#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define FOR(i,a,b) for(int i=a; i<b;i++)



int main(){
	int n;
	while(cin>>n, n){
		vi v(n);
		int sum=0;
		FOR(i,0,n){
			cin>>v[i];
			sum += v[i];
		}
		int avg = sum/n;
		cout<<"avg: "<<avg<<nl;
		int ans=0;
		FOR(i,0,n){
			ans += abs(v[i]-avg);

		}
		cout<<"The minimum number of moves is "<<ans/2<<"."<<nl;

	}


	return 0;
}
