#include<bits/stdc++.h>
using namespace std;
//
// int main(){
//   string s;getline(cin,s);
//   map<char, int>m;
//   vector<char>v;
//   int n= s.size();
//   for(int i=0;i<n;i++){
//     if(m.count(s[i])==0){
//       m[s[i]]=1;
//       v.push_back(s[i]);
//     }else{
//       m[s[i]]++;
//     }
//   }
//   for(int i=0;i<v.size();i++){
//     cout<<v[i]<<" "<<m[v[i]];cout<<endl;
//   }
//   return 0;
// }

int main(){
  string s;cin>>s;
  int n= s.size();
  for(int i=0;i<n;i++){
    s[i]= (s[i]+2)%25;
  }
  cout<<s;cout<<"\n";
  return 0;
}
