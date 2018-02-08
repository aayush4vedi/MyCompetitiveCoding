/*takes a bipartite graph as input and outputs
colours of the each vertex after coloring the vertices
*/
#include<bits/stdc++.h>

using namespace std;

int n,e,i,j;
vector<vector<int> > graph;
vector<int> color;
bool vis[100011];

void colour(int node,int num)
{
	queue<int> q;
	if(vis[node])
		return;
	color[node]=num;
	vis[node]=1;
	for(i=0;i<n;i++)
	{
		if(!vis[graph[node][i]])
		{
			q.push(graph[node][i]);
		}
	}
	while(!q.empty())
	{
		colour(q.front(),(num+1)%2);
		q.pop();
	}
	return;
}

int main()
{
	int x,y;
	cout<<"Enter number of vertices and edges respectively:";
	cin>>n>>e;
	cout<<"'R' is for Red Colour and 'B' is for Blue Colour.";
	cout<<"\n";
	graph.resize(n);
	color.resize(n);
	memset(vis,0,sizeof(vis));
	for(i=0;i<e;i++)
	{
		cout<<"\nEnter edge vertices of edge "<<i+1<<" :";
		cin>>x>>y;
		x--; y--;
		graph[x].push_back(y);
		graph[y].push_back(x);
	}
	colour(0,1);
	for(i=0;i<n;i++)
	{
		if(color[i])
		cout<<i+1<<" "<<'R'<<"\n";
		else
		cout<<i+1<<" "<<'B'<<"\n";
	}
}
