#include<stdio.h>

#include<stdlib.h>
#define MAX 10
int parent[MAX];
int find(int i)
{
	while(parent[i])
		i=parent[i];
	
	return i;
	
}
int uni(int i,int j)
{
	if(i!=j){
	parent[j]=i;
	return 1;
	}
	return 0;

	
}
int main()
{
	int cost_matrix[MAX][MAX];
	int row,col;
	int vertex_count=0;
	int edge_count=0,count=1;
	int sum_cost=0,min_cost;
	int row_no,col_no,edge1,edge2;
	printf("Enter the number of vertex:");
	scanf("%d",&vertex_count);
	printf("Enter the adjascency matrix:");
	for(row=1;row<=vertex_count;row++){
		for(col=1;col<=vertex_count;col++){
		scanf("%d",&cost_matrix[row][col]);
		if(cost_matrix[row][col]==0)
		cost_matrix[row][col]=999;
	}
	}
	edge_count=vertex_count-1;
	while(count<=edge_count)
	{
		for(row=1,min_cost=999;row<=vertex_count;row++){
		for(col=1;col<=vertex_count;col++){
			if(cost_matrix[row][col]<min_cost){
			
			min_cost=cost_matrix[row][col];
			edge1=row_no=row;
			edge2=col_no=col;
		}
		}
		}

	
	row_no=find(row_no);
	col_no=find(col_no);
	
	if(uni(row_no,col_no))
	{
		printf("\nEdge %d is (%d -> %d) with cost %d",count++,edge1,edge2,min_cost);
		sum_cost=sum_cost+min_cost;
		
	}
	cost_matrix[edge1][edge2]=cost_matrix[edge2][edge1]=999;

	}
	printf("\nThe minimun_cost:%d",sum_cost);
	return 0;

}

