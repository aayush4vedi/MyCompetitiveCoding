#include<iostream>

using namespace std;

// A function to color edges of the graph.
void EdgeColoring(int edge[][3], int e)
{
	int i, col, j;
	// Loop to assign a valid color to every edge 'i'.
	for(i = 0; i < e; i++)
	{
		col = 1;
		flag:
		// Assign a color and then check its validity.
		edge[i][2] = col;
		for(j = 0; j < e; j++)
		{
			if(j == i)
				continue;

			// Check the colors of the edges adjacent to the edge i.
			if(edge[j][0] == edge[i][0] || edge[j][0] == edge[i][1] || edge[j][1] == edge[i][0] || edge[j][1] == edge[i][1])
			{
				// If the color matches then goto line 11 and assign next color to the edge and check again.
				if(edge[j][2] == edge[i][2])
				{
					col++;
					goto flag;
				}
			}
		}
	}
}

int main()
{
	int i, v, e, j, count = 0;

	// take the input of the number of vertex and edges.
	cout<<"Enter the number of vertexes for the complete graph: ";
	cin>>v;

	e = (v*(v-1))/2;
	int edge[e][3];

	// Construct a complete graph for the given number of edges.
	for(i = 1; i <= v; i++)
	{
		for(j = i+1; j <= v; j++)
		{
			edge[count][0] = i;
			edge[count][1] = j;
			edge[count][2] = -1;
			count++;
 		}
	}

	// Color the edges of the graph.
	EdgeColoring(edge , e);

	// Print the color of each edge.
	for(i = 0; i < e; i++)
		cout<<"\nThe color of the edge between vertex V(1):"<<edge[i][0]<<" and V(2):"<<edge[i][1]<<" is: color"<<edge[i][2]<<".";
}
