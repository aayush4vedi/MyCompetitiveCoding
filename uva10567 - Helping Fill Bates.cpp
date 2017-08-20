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
int main(){

	  vvi.resize(256);
    cin >> c; int Q;
    for(int i = 0; i < c.size(); i++) {
        vvi[c[i]].push_back(i);
    }
    scanf("%d", &Q);
    for(int i = 0; i < Q; i++) {
        cin >> q;
        int ind = -1, a = 0; bool fin = true;
        for(int j = 0; j < q.size(); j++) {
            vector<int>::iterator low = upper_bound(vvi[q[j]].begin(), vvi[q[j]].end(), ind);
            ind = low - vvi[q[j]].begin();
            if(low == vvi[q[j]].end()) fin = false;
            ind = vvi[q[j]][ind];
            if(j == 0) a = ind;
        }
 
        if(fin) {
            printf("Matched %d %d\n", a, ind);
        } else printf("Not matched\n");
    }
	return 0;
		
}

