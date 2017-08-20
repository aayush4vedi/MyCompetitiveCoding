#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define ll long long
#define vb vector<bool>
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<double> vd;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<vector<int> > vvi;
typedef vector<vector<char> > vvc;
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
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))

#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()
#define pq priority_queue
inline ll Power(int b, int p) { ll ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }


vector<int>::iterator j;

// vector< pair < char, pair<int,int> > >v;

 
int main(void)
{
	    int L,N;
    pair<int, int> P[10000];
    
    while(true){
        scanf("%d %d",&L,&N);
        
        if(L == 0) break;
        
        for(int i = 0,x,r;i < N;++i){
            scanf("%d %d",&x,&r);
            P[i] = make_pair(x - r,x + r);
        }
        
        sort(P,P + N);
        
        int pos = 0,aux,i = 0,ans = N;
        
        while(pos < L){
            aux = pos;
            
            while(i < N && P[i].first <= pos)
                aux = max(aux,P[i++].second);
            
            if(aux == pos) break;
            
            pos = aux;
            --ans;
        }
        
        printf("%d\n",pos < L? -1 : ans);
    }

	return 0;
}