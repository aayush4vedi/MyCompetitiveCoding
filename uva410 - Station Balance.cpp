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

 
int main() {
    int case_number = 1;
    while (true)
    {
        int number_of_chambers;
        int number_of_elements;
        cin >> number_of_chambers;
        if (cin.eof())
        {
            break;
        }
        cin >> number_of_elements;
        vector<int> masses;
        for (int i = 0; i < number_of_elements; i++)
        {
            int mass;
            cin >> mass;
            masses.push_back(mass);
        }
        
        // I have read the book - to be honest - I wouldn't be able to come up
        // with this greedy algorithm myself now

        sort(masses.begin(), masses.end());

        int large_index = masses.size();
        int small_index = large_index - 2 * number_of_chambers;

        double mean = 0;

        for (vector<int>::iterator mi = masses.begin(); mi != masses.end(); mi++)
        {
            mean += *mi;
        }
        mean = mean / number_of_chambers;

        cout << "Set #" << case_number << endl;        
        double imbalance = 0;
        for (int i = 0; i < number_of_chambers; i++)
        {
            double chamber_sum = 0;
            cout << i << ":";
            if (small_index >= 0)
            {
                chamber_sum += masses[small_index];
                cout << " " << masses[small_index];
            }
            if (large_index > 0)
            {
                cout << " " << masses[large_index - 1];
                chamber_sum += masses[large_index - 1];
            }
            double diff = chamber_sum - mean;
            imbalance += (diff > 0 ? diff : -diff);
            small_index++;
            large_index--;
            cout << endl;
        }
        std::cout << std::setprecision(5) << std::fixed;
        cout << "IMBALANCE = " << imbalance << endl;
        cout << endl;

        case_number++;
    }
 
    return 0;
}
