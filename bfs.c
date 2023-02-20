#include<stdio.h>
int bfs(int);
int g[20][20],visited[20],i,j,q[20],s,n,f,r=-1;
int main()
{
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	printf("Enter the adjascency matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	for(i=0;i<n;i++)
		{
			q[i]=0;
			visited[i]=0;
		}
	
	bfs(0);
	for(i=0;i<n;i++){
		if(visited[i]){
			printf("\t %d",i);
		}
	}
			
}
int bfs(int i)
{
	int j;
	for(j=0;j<n;j++)
	{
		if(!visited[j]&&g[i][j]==1)
		{
			q[++r]=j;
		}
		
	}
	if(f<=r)
	{
		visited[q[f]]=1;
		bfs(q[++f]);
	}
}
