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
	int s,b;
	int left[s],right[s];
	while(cin>>s>>b, s||b){
		FOR(i,0,s){
			left[i]= i-1;
			right[i] = i+1;
		}
		left[0] = -1;
		right[s-1] = -1;
		while(b--){
			int l,r;cin>>l>>r;
			left[right[r-1]]= left[l-1];
			if(left[l-1]== -1)
				cout<<"* ";
			else
				cout<<left[l-1]<<" ";
			right[left[l-1]]= right[r-1];
			if(right[r-1]== -1)
				cout<<"* ";
			else
				cout<<right[r-1]<<" ";
			
		}
		cout<<"-\n";

	}
	return 0;
	
}
