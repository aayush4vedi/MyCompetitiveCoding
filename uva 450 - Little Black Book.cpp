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

vector<int>::iterator j;


struct PersonInfo {
    string title, first, last;
    string add, dpm;
    string homephone, workphone, campusbox;
};
int n, k;
char s[maxN];
vector<PersonInfo> res;

bool cmp(PersonInfo a, PersonInfo b) {
    return (a.last < b.last);
}

void PrintResult() {
    sort(all(res), cmp);
    REP (i, res.size()) {
        puts("----------------------------------------");
        cout << res[i].title << " " << res[i].first << " " << res[i].last << endl;
        cout << res[i].add << endl;
        printf("Department: "); cout << res[i].dpm << endl;
        printf("Home Phone: "); cout << res[i].homephone << endl;
        printf("Work Phone: "); cout << res[i].workphone << endl;
        printf("Campus Box: "); cout << res[i].campusbox << endl;
    }
}

string Take() {
    string rs = "";
    while (k < n && s[k]!=',') {
        rs += s[k++];
    }
    k++;
    return rs;
}

main() {
//    FileIn("test"); FileOut("test");
    int Case;
    PersonInfo p;
    char dpm[maxN];
    for (scanf("%d", &Case), gets(dpm); Case--; ) {
        gets(dpm);
        while (gets(s)) {
            n = strlen(s); k = 0;
            if (!n) break;
            
            p.title = Take();
            p.first = Take();
            p.last = Take();
            p.dpm = dpm;
            p.add = Take();
            p.homephone = Take();
            p.workphone = Take();
            p.campusbox = Take();
            
            res.pb(p);
        }
    }
    PrintResult();
}

