#include<bits/stdc++.h>
#include <string.h>
using namespace std;

#define nl endl
#define vi vector<int>
#define vb vector<bool>
#define FOR(i,a,b) for(int i=a; i<b;i++)
#define REP(i, n) for (int i=0; i<n; i++)
#define IterV (j, v) for(vector<int>::iterator j = v.begin(); j!=v.end();j++)
#define pb push_back
#define mp make_pair
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define LL long long
#define isOdd(i) (i&1)
#define isEven(i) (!(i&1))
#define all(ar) ar.begin(), ar.end()

vector<int>::iterator j;


int main(){

while (true)
    {
        string s;
        cin >> s;
        if (cin.eof())
        {
            break;
        }
        bool valid = true;
        for (unsigned int i = 1; i < s.length(); i++)
        {
            if (s[i] <= s[i - 1])
            {
                valid = false;
                break;
            }
        }
        if (valid)
        {
            queue<string> bfs_queue;
            bfs_queue.push("");
            int count = 0;
            while (true)
            {
                string v = bfs_queue.front();
                if (v == s)
                {
                    break;
                }
                count++;
                bfs_queue.pop();
                if (v == "")
                {
                    for (char c = 'a'; c <= 'z'; c++)
                    {
                        char s[2];
                        s[0] = c;
                        s[1] = 0;
                        bfs_queue.push(s);
                    }
                }
                else
                {
                    char last = v[v.length() - 1];
                    for (char next = last + 1; next <= 'z'; next++)
                    {
                        bfs_queue.push(v + next);
                    }
                }
            }
            cout << count << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

	return 0;
	
}

