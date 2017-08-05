#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nextl endl;

int gcd(int a, int b){
	if(b==0){
		return a;
	}
	return gcd( b, a%b);
}
int findlcm(vector<int>& v){
	int ans = v[0];
	for(vector<int>::iterator it = v.begin();it != v.end(); it++){
		ans = (((*it)*ans)/gcd((*it), ans));
	}
	return ans;
}

int main(){
	string s;
	int t;
	while(getline(cin, s)){
		stringstream ss(s);
		int time;
		vector<int> v;


		while(ss>>time){
			v.push_back(time-5);
		}
		if(findlcm(v) <= 3600){
			cout<<"Set "<<t<<"synchs again at "<<findlcm(v)/60<<"minutes(s) and "<<findlcm(v)%60<<"second(s) after akk turning green."<<endl;
		}else{
			cout<<"Set "<<t<<"is unable to synch after one hour."<<endl;
		}
		t++;
	}
	return 0;
}
