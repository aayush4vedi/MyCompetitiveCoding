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

	int number_of_cases;
    cin >> number_of_cases;
    for (int c = 0; c < number_of_cases; c++)
    {
        int depth;
        int drops;
        int number_of_internal_nodes = 1;

        cin >> depth;
        cin >> drops;

#ifdef simulation
        // We don't need to keep the flag for the leaves
        for (int d = 0; d < (depth - 1); d++)
        {
            number_of_internal_nodes *= 2;
        }
        number_of_internal_nodes--;

        bool* tree = new bool[number_of_internal_nodes];

        for (int i = 0; i < number_of_internal_nodes; i++)
        {
            tree[i] = false;
        }

        for (int i = 0; i < drops; i++)
        {
            int ball_position = 1; 
            // The ball only go down (depth - 1) times
            for (int j = 0; j < depth - 1; j++) 
            {
                if (tree[ball_position - 1] == false)
                {
                    tree[ball_position - 1] = true;
                    // Go to left
                    ball_position = ball_position * 2;
                }
                else
                {
                    tree[ball_position - 1] = false;
                    ball_position = ball_position * 2 + 1;
                }
            }

            // Showing the leaf number for all drops
            // cout << ball_position << endl;

            // Showing the binary representation of the solution
            cout << bitset<8>(ball_position) << endl;
        }
	return 0;
		
}

