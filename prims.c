#include<stdio.h>
#include<conio.h>
int a,b,i,j,c,d,u,v;
int visited[10]={0},cost[10][10],n,ne=1,min,min_cost=0;


int main()
{

	printf("Enter the no. of vertex:");
	scanf("%d",&n);
	printf("Enter the adjascency matrix\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++){
			scanf("%d",&cost[i][j]);
			if(cost[i][j]==0)
				cost[i][j]=999;
		}
		
	
	visited[1]=1;
	printf("\n");
	while(ne < n)
	{
		
		for(i=1,min=999;i<=n;i++)
		for(j=1;j<=n;j++)
			if(cost[i][j]<min)
				if(visited[i]!=0)
				{
					min=cost[i][j];
					a=u=i;
					b=v=j;
					
				}
		
		
	
	if(visited[u]==0 || visited[v]==0)
		{
		printf("\n Edge %d is (%d -> %d) with weight %d",ne++,a,b,min);
		min_cost+=min;
		visited[b]=1;
		}
		cost[a][b]=cost[b][a]=999;
		
	
	}
		printf("The minimun cost is %d",min_cost);
		getch();
			
}
