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
		vi v(n), dif(n-1);
		FOR(i,0,n){
			int x;cin>>x;
			v[i]=x;
		}
		FOR(i,0,n-1){
			dif[i]=abs(v[i]-v[i+1]);
		}
		sort(diff.begin(),diff.end());
		int flag=0;
		FOR(i,0,n-1){
			if(diff[i] != i+1){
				flag++;
				break;
			}
		}
		if(!flag){
			cout<<"Not Jolly\n";
		}else{
			cout<<"Jolly\n";
		}


	}



	return 0;
	
}
