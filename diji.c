#include<stdio.h>
# define INFINITY 9999
# define MAX 10
int diji(int g[MAX][MAX],int n1,int startnode);
int main()
{
	int g[MAX][MAX],i,j,n,startnode;
	printf("Enter the numner of vertx:");
	scanf("%d",&n);
	printf("Enter the adjascency matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	printf("Enter the staring node:");
	scanf("%d",&startnode);
	diji(g,n,startnode);
		
}
int diji(int g[MAX][MAX],int n,int startnode)
{
	int cost[MAX][MAX],distance[MAX],pred[MAX],visited[MAX],mincost,count,i,j,nextnode,mindistance;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			if(g[i][j]==0)
				cost[i][j]=INFINITY;
			else
				cost[i][j]=g[i][j];
	for(i=0;i<n;i++)
	{
		distance[i]=cost[startnode][i];
		pred[i]=startnode;
		visited[i]=0;
	}
	distance[startnode]=0;
	visited[startnode]=1;
	count=1;
	while(count<n-1)
	{
		mindistance=INFINITY;
		for(i=0;i<n;i++)
			if(distance[i]<mindistance&&!visited[i])
			{
				mindistance=distance[i];
				nextnode=i;
			}
		visited[nextnode]=1;
		for(i=0;i<n;i++)
		{
			if(!visited[i])
			if(mindistance+cost[nextnode][i]<distance[i])
			{
				distance[i]=mindistance+cost[nextnode][i];
				pred[i]=nextnode;
			}
		}
		count++;
	}
	for(i=0;i<=n;i++)
	
		if(i!=startnode){
	
		printf("\nThe  distance of %d=%d",i,distance[i]);
		printf("\n The path is %d",i);
		j=i;
		do{
			j=pred[j];
			printf("<-%d",j);
		}while(j!=startnode);
	}
}
