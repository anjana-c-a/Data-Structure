#include <stdio.h>
int dfs(int);
int g[20][20],visited[20],n;
int main()
{
	int i,j;
	printf("Enter the number of vertex:");
	scanf("%d",&n);
	printf("Enter the adjascency matrix:");
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			scanf("%d",&g[i][j]);
	
	for(i=0;i<n;i++)
		visited[i]=0;
	dfs(0);
	return 0;
}
int dfs(int i)
{
	int j;
	printf("%d",i);
	visited[i]=1;
	for(j=0;j<n;j++)
	{
	
	if((!visited[j])&&g[i][j]==1)
		dfs(j);
}
return 0;
}
