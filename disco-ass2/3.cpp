#include<stdio.h>
/*
int main()
{
    int n,m;
    int tot=0;
    scanf("%d %d",&n,&m);

    int a[n][n],i,j;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    for(i=0;i<m;i++)
    {
        int l,r;
        scanf("%d %d",&l,&r);

        a[l][r]=1;
    }

    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
                sum++;
        }
        if(sum==0)
        {
            for(j=0;j<n;j++)
                a[i][j]=1;
        }
    }

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]==1)
                tot++;
        }
    }

    for(i=0;i<n;i++)
    {
        int sum=0;
        for(j=0;j<n;j++)
        {
            if(a[j][i]==1)
                sum++;
        }
        printf("%lf\n",(double)sum/tot);
    }
}
*/
/***/
int a[100][100];
double b[100][100], p[100];

void mul(int n){
	double temp[n];
	int i, j;
	for(i=0; i<n; i++){
		temp[i] = 0.0;
		for(j=0; j<n; j++){
			temp[i] += b[i][j]*p[j];
		}
	}
	for(i=0; i<n; i++){
		p[i] = temp[i];
	}
}

int main(void){
	int n;
	scanf("%d",&n);
	int m;
	scanf("%d", &m);
	int degree[n];
	int i, j;
	for(i=0; i<n; i++){
		p[i] = 0.0;
		for(j=0; j<n; j++){
			a[i][j] = 0;
		}
	}
	p[0] = 1.0;
	for(i=0; i<m; i++){
		int p, q;
		scanf("%d%d",&p,&q);
		degree[p]++;
		a[p][q] = 1;
	}
	for(i=0; i<n; i++){
		if(degree[i] > 0){
			for(j=0; j<n; j++){
				if(a[i][j] == 1){
					b[j][i] = 1/(double)degree[i];
				}
			}
		}else{
			for(j=0; j<n; j++){
				b[j][i] = 1/(double)n;
			}
		}
	}
	/*for(i=0; i<n; i++){
		for(j=0; j<n; j++){
			printf("%lf ",b[i][j]);
		}
		printf("\n");
	}
  */
  /**/
	for(i=0; i<10; i++){
		mul(n);
	}
	for(i=0; i<n; i++){
		printf("%lf\n",p[i]);
	}
}
/**

**/
