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


ibool matchAll(string Output, vector<string> Frags)
{
    int nMatched =0;
    for (int i=0; i<Frags.size(); i++)
        for (int j=0; j<Frags.size(); j++)
         
            if ( i != j && (Frags[i] + Frags[j] == Output || Frags[j] + Frags[i] == Output))  nMatched++, Frags[i] = "*", Frags[j] = "*";
    if (nMatched == Frags.size()/2) return true;
    return false;
}
int main()
{
    int N;
    char Input[10000];
 
    gets(Input);
 
    N = atoi(Input);
    for (int i=0; i<N; i++)
    {
        scanf("\n");
        int counter=0;
         
        int nFragments=0, nBits=0, OSize;
        vector<string> Frags;
        while(fgets(Input,10000,stdin))
        {
            string T;
            if (Input[0] == '\n') break;
            stringstream s(Input);
            s >> T;
            Frags.push_back(T);
            nFragments++;
            nBits += (int)T.length();
        }
         
        if (i == N-1) nBits++;
        OSize = (2*nBits)/nFragments;
 
        string FinalOutput;
        for (int i=0; i<Frags.size(); i++)
            for (int j=0; j<Frags.size(); j++)
            {
                string Output;
                if (i != j && (int)Frags[i].length() + (int)Frags[j].length() == OSize)
                {
                    Output = Frags[i] + Frags[j];
                    if (matchAll(Output, Frags))
                        {
                            FinalOutput = Output;
                            break;
                        }
                }
            }
     
             
            cout << FinalOutput << endl;
 
            if (i != N-1) cout << endl;
 
         
 
    }
    return 0;
	
}

