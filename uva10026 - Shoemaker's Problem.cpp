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

 struct Job
{
    int time;
    int fine;
    int id;
};

bool comp(const Job &j1, const Job&j2)
{
    return j1.time * j2.fine < j2.time * j1.fine;
}

int main()
{  
    int T;
    cin >> T;
    while ( T-- )
    {
        int N;
        cin >> N;

        vector<Job> job(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> job[i].time >> job[i].fine;
            job[i].id = i + 1;
        }
        
        // Greedily pick a next job imposing the minimum fine.
        // Keep lexicographical order for equivalent jobs.
        stable_sort(job.begin(), job.end(), comp);

        cout << job[0].id;
        for (int i = 1; i < N; ++i)
            cout << " " << job[i].id;
        cout << endl;
        
        if (T)
            cout << endl;
    }
    return 0;
}