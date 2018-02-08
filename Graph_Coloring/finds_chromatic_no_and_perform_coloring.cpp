//finds chromatic no of cyclinc graphs
//also performs coloring on the(jo hai graph mei)edges of graph
#include<iostream>

using namespace std;

// A function to color edges of the graph.
int EdgeColoring(int edge[][3], int e)
{
 int i, col, j, max = -1;
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

 // Find the coloring index and return it, to main.
 for(i = 0; i < e; i++)
 {
   if(max < edge[i][2])
     max = edge[i][2];
 }
 return max;
}

int main()
{
 int i, v, e, j, max = -1;

 // take the input of the number of vertex and edges.
 cout<<"Enter the number of vertexes of the graph: ";
 cin>>v;
 cout<<"Enter the number of edges of the graph: ";
 cin>>e;
 int edge[e][3];

 // Take the input of the adjacent vertex pairs of the given graph.
 for(i = 0; i < e; i++)
 {
   cout<<"\nEnter the vertex pair for edge "<<i+1;
   cout<<"\nV(1): ";
   cin>>edge[i][0];
   cout<<"V(2): ";
   cin>>edge[i][1];

   edge[i][2] = -1;
 }

 // Print the chromatic index.
 cout<<"\n\nThe chromatic index of the given graph is: "<<EdgeColoring(edge , e);

 // Print the edge color for the edges of the given graph.
 for(i = 0; i < e; i++)
   cout<<"\nThe color of the edge between vertex V(1):"<<edge[i][0]<<" and V(2):"<<edge[i][1]<<" is: color"<<edge[i][2]<<".";

 return 0;
}
