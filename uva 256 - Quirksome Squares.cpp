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
typedef vector<vector<int> > vvc;
typedef map<int, int> mii;
typedef map<string, int> msi;
typedef map<int, string> mis;
typedef map<string, bool> msb;
typedef map<string, string> mss;
typedef map<string, char> msc;
typedef pair<int, int> ii; 
typedef vector<ii> vii;
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
inline LL Power(int b, int p) { LL ret = 1; for ( int i = 1; i <= p; i++ ) ret *= b; return ret; }


vector<int>::iterator j;


using namespace std;
 
int N;
vector<int> squares;
 
int prep() {
    for(int i = 0; i < 10000; i++)
        squares.push_back(i * i);
}
 
int main() {
    prep();
    while(scanf("%d", &N) == 1) {
        for(int i = 0; i < squares.size(); i++) {
            if(squares[i] >= (int) pow(10, N)) break;
            if(pow(squares[i] % (int) pow(10, N / 2) + squares[i] / (int) pow(10, N / 2), 2) == squares[i]) \
                cout << setw(N) << setfill('0') << squares[i] << endl;
        }   
    }
}