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





// template<class TYPE>
// void PrintTwice(TYPE data)
// {
//     cout<<"Twice: " << data * 2 << endl;
// }

int DFSTime=0;
using namespace std;
class Vertex{
public:
	int key;
	int sat;
	int dis;
	Vertex* pre;
	int pkey;
	set< pair<int,Vertex*> > adj;
	int start;
	int finish;
	int color;
	int heapInd;
public:
	Vertex(int k):key(k),sat(-1),dis(999999999),pre(NULL),pkey(999999999),start(-1),finish(-1),color(0),heapInd(-1){}
	Vertex(int k,int s):key(k),sat(s),dis(999999999),pre(NULL),pkey(999999999),start(-1),finish(-1),color(0),heapInd(-1){}
	bool operator <(Vertex v1){
		return pkey<v1.pkey;
	}
	bool operator >(Vertex v1){
		return pkey>v1.pkey;
	}
	friend ostream& operator<<(ostream& os,const Vertex& v);
};
ostream& operator<<(ostream& os,const Vertex& v){
	os<<v.key<<" "<<" pkey= "<<v.pkey<<" color "<<v.color<<" "<<v.dis<<endl;
	return os;
}

class SGraph{
public:
	map<int,Vertex*> V;
	map<pair<int,int>,int> E;
	deque<Vertex*> TS;
  int cycle;   //remove if cycle not reqd
public:
	//creation of vertices and edges with edge weight 1
	SGraph(vector<int> ver,vector< pair<int,int> > edge){
		//this will create vertices in space out of the elements of vector ver
		vector<int>::iterator v;
		for(v=ver.begin();v!=ver.end();v++)
			V[*v]=new Vertex(*v);

		cout<<"vertices created successfully"<<endl;

		//will create edges-undirected or directed
		vector< pair<int,int> >::iterator e;
		for(e=edge.begin();e!=edge.end();e++)
		{
			pair<int,Vertex*> a(1,V[(*e).second]);
			V[(*e).first]->adj.insert(a);

			//remove the following line/s if graph is directed::
			// pair<int,Vertex*> b(1,V[(*e).first]);
			// V[(*e).second]->adj.insert(b);

		}
	}
	//creation of vertices and edges with diff edge weights
	SGraph(vector<int> ver,vector< pair<int,int> > edge,vector<int> weight){
		vector<int>::iterator v;
		for(v=ver.begin();v!=ver.end();v++)
			V[*v]=new Vertex(*v);

		cout<<"vertex created successfully"<<endl;

		vector< pair<int,int> >::iterator e;
		vector<int>::iterator w;
		for(e=edge.begin(),w=weight.begin();e!=edge.end() or w!=weight.end();e++,w++)
		{
			pair<int,Vertex*> a(*w,V[(*e).second]);
			V[(*e).first]->adj.insert(a);

			//remove the following line/s if graph is directed::
			//pair<int,Vertex*> b(*w,V[(*e).first]);
			//V[(*e).second]->adj.insert(b);

			//making edge weight map
			E[*e]=*w;
			pair<int,int> temp((*e).second,(*e).first);
			E[temp]=*w;
		}
	}
	void showGraph()
	{
		map<int,Vertex*>::iterator d;
		for(d=V.begin();d!=V.end();d++)
			cout<<*(d->second);

		map<pair<int,int>,int>::iterator e;
		for(e=E.begin();e!=E.end();e++)
			cout<<e->first.first<<" "<<e->first.second<<" "<<e->second<<endl;
	}
	void reset()
	{
		map<int,Vertex*>::iterator d;
		for(d=V.begin();d!=V.end();d++)
		{
			DFSTime=0;
			d->second->dis=999999999;
			d->second->pre=NULL;
			d->second->start=-1;
			d->second->finish=-1;
			d->second->pkey=999999999;
			d->second->color=0;
		}
	}
	void setBFS(int source)
	{
		Vertex* s=V[source];
		queue<Vertex*> Q;
		Q.push(s);
		s->color=1;
		s->dis=0;
		set< pair<int,Vertex*> >:: iterator v;
		while(not Q.empty())
		{
			Vertex* cur=Q.front();
			Q.pop();
			for(v=cur->adj.begin();v!=cur->adj.end();v++)
			{

				if((*v).second->color==0)
				{
					Q.push((*v).second);
					(*v).second->pre=cur;
					(*v).second->dis=cur->dis+1;
					(*v).second->color=1;
				}
			}
			cur->color=2;
		}
	}
	bool isReachable(int source,int dest)
	{
		return V[dest]->dis!=999999999;
	}
	int setDFS()
	{
		int components=0;
		map<int,Vertex*> ::iterator i;
		for(i=V.begin();i!=V.end();i++)
		{
			if(i->second->color==0)
			{
				DFSVisit(i->second);
				components+=1;
			}
		}
		return components;
	}
	void DFSVisit(Vertex* cur)
	{
		cur->color=1;
		DFSTime++;
		cur->start=DFSTime;
		set< pair<int,Vertex*> >::iterator v;
		for(v=cur->adj.begin();v!=cur->adj.end();v++)
		{
			if((*v).second->color==0)
			{
				(*v).second->pre=cur;
				DFSVisit((*v).second);
			}

      //remove else if if cycle not reqd
    //   else if((*v).second->color == 1)
		// 		cycle = 1;
		}
		DFSTime++;
		cur->color=2;
		cur->finish=DFSTime;
		TS.push_front(cur);
	}
	void showTS(void){
		for(deque<Vertex*>::iterator iter = TS.begin(); iter != TS.end(); iter++)
			cout<< (*iter)->key <<" ";
	}
	void showTSRev(void){
		for(deque<Vertex*>::reverse_iterator iter = TS.rbegin(); iter != TS.rend(); iter++)
			cout<< (*iter)->key <<" ";
	}
};
int main()
{
	vector<int> ver;

	int n,m;
	cout<<"enter no of verteices,n: \n";
	cin>>n;
	cout<<"enter no of edges,n: \n";
	cin>>m;
	cout<<"enter the vertices: \n";
	for(int i=0;i<n;i++)
		ver.pb(i);
  cout<<"enter the edges:\n";
	vector< pair<int,int> > edge;
	for(int i=0;i<m;i++)
	{
		int x, y;
		cout<<"enter: \n";
		cin>>x>>y;
		edge.pb(make_pair(x,y));
	}
	SGraph a(ver,edge);
	a.setDFS();
	//cout<<"enter source for DFS\n";
	//int x;cin>>x;
	//a.setBFS(x);
	//a.DFSVisit();
	a.showTS();
	return 0;
}
