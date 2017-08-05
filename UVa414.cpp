#include<bits/stdc++.h>
#include <string.h>
using namespace std;


int main(){
	int n;
	while(cin>>n, n){
		cin.ignore();
		vector<int>v(n);
		int minSpace =10000;
		int space;
		for(int i=0;i<n;i++){
			string s;
			space=0;
			getline(cin, s);
			for(string::const_iterator it = s.begin(); it != s.end();++it){
				if(*it =='B'){
					space++;
				}
			}
			v[i]=space;
			// cout<<endl<<" space: "<<space<<endl;
			if(minSpace > space){
				minSpace = space;
			}
			// cout<<endl<<" minspace: "<<minSpace<<endl;

		}
		int total=0;
		for(int i=0;i<n;i++){
			total += v[i]-minSpace;
		}
		cout<<total<<endl;

	}

	return 0;
}
