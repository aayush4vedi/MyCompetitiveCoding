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

	while (true)
    {
        int period_length;
        int number_of_popes;
        cin >> period_length;
        if (cin.eof())
        {
            break;
        }
        cin >> number_of_popes;
        vector<int> years;
        for (int i = 0; i < number_of_popes; i++)
        {
            int year;
            cin >> year;
            years.push_back(year);
        }

        int maxFrom = -1;
        int maxTo = -1;
        int maxSize = -1;

        for (unsigned int i = 0; i < years.size(); i++)
        {
            int lower_year = years[i];
            int upper_year = lower_year + period_length - 1; // Inclusive index
            vector<int>::iterator upper_bound_pointer = upper_bound(years.begin(), years.end(), upper_year);
            int exclusive_upper_index = upper_bound_pointer - years.begin();

            int size = exclusive_upper_index - i;
            if (size > maxSize)
            {
                maxFrom = lower_year;
                maxTo = *(upper_bound_pointer - 1);
                maxSize = size;
            }
        }
        cout << maxSize << " " << maxFrom << " " << maxTo << endl;

    }
	return 0;
		
}

