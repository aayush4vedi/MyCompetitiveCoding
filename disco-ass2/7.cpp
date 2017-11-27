#include<stdio.h>
#define MAX 99999
#define sqr(x) ((x)*(x))
typedef struct point{
	int id;
	double x;
	double y;
}point;

typedef struct cluster{
	point centroid;
	int nElements;
	point list[MAX];
}cluster;
int n;
double dist(point p1,point p2)
{
	double x_diff, y_diff, distance;
	x_diff = ((p1.x)-(p2.x));
	y_diff = ((p1.y)-(p2.y));
	distance = sqr(x_diff)+sqr(y_diff);
	return distance;
}
void setCentroid(cluster lawda[],int a,int b)
{
	lawda[a].centroid.x=((lawda[a].centroid.x)*(lawda[a].nElements)+(lawda[b].centroid.x)*(lawda[b].nElements))/(lawda[a].nElements+lawda[b].nElements);
	lawda[a].centroid.y=((lawda[a].centroid.y)*(lawda[a].nElements)+(lawda[b].centroid.y)*(lawda[b].nElements))/(lawda[a].nElements+lawda[b].nElements);
}

void merge(cluster lawda[], int k)
{
	int a,b;
	double min,c;
	min=dist(lawda[0].centroid,lawda[1].centroid);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			c=dist(lawda[i].centroid,lawda[j].centroid);
			if(c<min)
			{
				a=i;
				b=j;
			}
		}
	}
	setCentroid(lawda,a,b);
	int temp = lawda[a].nElements;
	lawda[a].nElements += lawda[b].nElements;
	for (int i = 0; i < lawda[b].nElements; ++i)
	{
		lawda[a].list[temp+i] = lawda[b].list[i];
	}
	for (int i = b+1; i < n; ++i)
	{
		lawda[i-1] = lawda[i];
	}
	n--;
	while(n-k){
		merge(lawda, k);
	}
}

int main(){
	int  k;
	scanf("%d", &n);
	cluster lawda[n];
	for(int i=0; i<n; ++i)
	{
		point temp;
		scanf("%d %d", &temp.x, &temp.y);
		temp.id=i;
		lawda[i].list[0] = temp;
		lawda[i].centroid = temp;
		lawda[i].nElements=1;
	}
	scanf("%d", &k);
	merge(lawda, k);
	for (int i = 0; i < n; ++i)
	{
		for(int j=0;j<lawda[i].nElements;j++)
		{
			printf("%d ",lawda[i].list[j].id );
		}
		printf("\n");
	}
	return 0;
}
