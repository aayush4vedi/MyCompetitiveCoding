#include<bits/stdc++.h>
//#include <string.h>
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
typedef stack<int> si;
typedef queue<int> qi;
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

const int MAX_N = 100;

//1.
/*
int main() {
	int n;cin>>n;
	int a[n];
	int dist;
	int flag=0;
	FOR(i,0,n)cin>>a[i];
	FOR(i,0,n){
		FOR(j,i+1,n){
			if(a[i]==a[j]){

				if(flag == 0){
					dist = j-i;flag++;
				}else{
					dist = min(dist, j-i);
				}
			}
		}
	}
	if(flag ==0)cout<<"-1\n";
	else cout<<dist<<"\n";


	return 0;
}
/**/
//2
/*
int main() {
	int a,b,c;
	cin>>a>>b>>c;
	qi s1,s2,s3;
	int sum1=0, sum2=0, sum3=0;
	int flag=0;
	while(a--){
		int x;cin>>x;
		s1.push(x);
		sum1 += x;
	}
	//cout<<"s1 value is: "<<s1.value()<<endl;
	while(b--){
		int x;cin>>x;
		s2.push(x);
		sum2 += x;
	}
	//cout<<"s2 value is: "<<s2.value()<<endl;
	while(c--){
		int x;cin>>x;
		s3.push(x);
		sum3 += x;
	}
	//cout<<"s3 value is: "<<s3.value()<<endl;
	while(sum1 != 0 && sum2 != 0 && sum3 != 0 ){
		if(sum1 == sum2 && sum1 == sum3 ){
			//cout<<sum1<<endl;
			flag++;
			break;
		}else if(sum1 == max3(sum1, sum2, sum3)){
				sum1 -= s1.front();
				s1.pop();
				//goto label;
				//cout<<"sum1 reduced.new value is "<<sum1<<endl;
			}
			else if(sum2 == max3(sum1, sum2, sum3)){
				sum2 -= s2.front();
				s2.pop();
				//goto label;
				//cout<<"sum2 reduced.new value is "<<sum2<<endl;
			}
			else if(sum3 == max3(sum1, sum2, sum3)){
				sum3 -= s3.front();
				s3.pop();
				//goto label;
				//cout<<"sum3 reduced.new value is "<<sum3<<endl;
			}


	}
	if(flag >0)cout<<sum1<<endl;
	else cout<<"0\n";


	return 0;
}
/**/
//3
/*
int main() {

	return 0;
}
/**/
//4
/**/
int g[100][100]={0};
#define V 9
void binary(int number) {
	int remainder;

	if(number <= 1) {
		cout << number;
		return;
	}

	remainder = number%2;
	binary(number >> 1);
	cout << remainder<<endl;
}
int minDistance(int dist[], bool sptSet[])
{
    // Initialize min value
    int min = INT_MAX, min_index;

    for (int v = 0; v < V; v++)
        if (sptSet[v] == false && dist[v] <= min)
            min = dist[v], min_index = v;

    return min_index;
}
int dijkstra(int g[][100], int src)
{
    int dist[V]; // The output array.  dist[i] will hold the shortest
    // distance from src to i

    bool sptSet[V]; // sptSet[i] will true if vertex i is included in shortest
    // path tree or shortest distance from src to i is finalized

    // Initialize all distances as INFINITE and stpSet[] as false
    for (int i = 0; i < V; i++)
        dist[i] = INT_MAX, sptSet[i] = false;

    // Distance of source vertex from itself is always 0
    dist[src] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++)
    {
        // Pick the minimum distance vertex from the set of vertices not
        // yet processed. u is always equal to src in first iteration.
        int u = minDistance(dist, sptSet);

        // Mark the picked vertex as processed
        sptSet[u] = true;

        // Update dist value of the adjacent vertices of the picked vertex.
        for (int v = 0; v < V; v++)

            // Update dist[v] only if is not in sptSet, there is an edge from
            // u to v, and total weight of path from src to  v through u is
            // smaller than current value of dist[v]
            if (!sptSet[v] && g[u][v] && dist[u] != INT_MAX && dist[u]
                    + g[u][v] < dist[v])
                dist[v] = dist[u] + g[u][v];
    }

    // print the constructed distance array
		int ans=0;
    FOR(i,0,V){
			ans += dist[i];
		}
		return ans;
}
int main() {
	int n,m;
	cin>>n>>m;
	g[n][m];
	FOR(i,0,m){
		int a,b,c;
		cin>>a>>b>>c;
		g[a][b]=c;
		g[b][a]=c;

	}
	int ans=0;
	FOR(i,0,n+2){
		ans += dijkstra(g, i+1);
	}
	//binary(ans);
	cout<<ans<<endl;

	return 0;
}
/**/

//5
/*
int main() {

	return 0;
}
/**/

//6
/*
int main() {

	return 0;
}
/**/
