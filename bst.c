#include<stdio.h>
#include<malloc.h>
struct node{
	struct node *left,*right;
	int data;
};struct node *new_node;
typedef struct node node;
int insertion(node **tree,int val)

{
	node *new_node;
	if(!(*tree))
	{
		new_node=(node*)malloc(sizeof(node));
		new_node->data=val;
		new_node->left=NULL;
		new_node->right=NULL;
		*tree=new_node;
	}
	if(val<(*tree)->data)
	insertion(&(*tree)->left,val);
	else
	if(val>(*tree)->data)
	insertion(&(*tree)->right,val);
}
int inorder(node * tree)
{
	if(tree)
	{
		inorder(tree->left);
		printf("%d\n",tree->data);
		inorder(tree->right);
	}
}

node *minvalue(node * min)


{
	node *current;
	current=min;
	while(current && current->left!=NULL){
	current=current->left;
}
return current;
}

node *search(node **tree,int val){
	if(!(tree)){
		printf("empty");
	}
	else{
		if(val==(*tree)->data){
			return (*tree)->data;
		}
		else if(val<(*tree)->left){
			search(&(*tree)->left,val);
		}
		else{
			search(&(*tree)->right,val);
		}
	}
	
}
int deletes(node ** tree,int val)
{
	node*succ;
	node*temp;
	if(!(*tree))
	{
		printf("The tree is empty");
	}
	else if(val<(*tree)->data)
	deletes(&(*tree)->left,val);
	else if(val>(*tree)->data)
	deletes(&(*tree)->right,val);
	else 
	{
	if((*tree)->left==NULL && (*tree)->right==NULL){
		temp=*tree;
		*tree=NULL;
		printf("%d deleted",temp->data);
		free(temp);
	}
	
	else if((*tree)->left==NULL)
		{
			temp=*tree;
			*tree=(*tree)->right;
				printf("%d deleted",temp->data);
				free(temp);
		}
	
	else if((*tree)->right==NULL)
		{
			temp=*tree;
			*tree=(*tree)->left;
				printf("%d deleted",temp->data);
				free(temp);
		}
	
	else{
		succ=minvalue((*tree)->right);
		temp=*tree;
		*tree=succ;
		printf("%d is replaced by %d",temp->data,succ->data);
		free(temp);
		
	}
}
	
	
}
int main(){

struct node *root;
root =NULL;
int x,y,del,temp;
int choice;
printf("\n1.insert\n2.display\n3.search\n4.delete");
do{
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:printf("Enter the elemrnt:");
				scanf("%d",&x);
				insertion(&root,x);
				break;
		case 2:inorder(root);
				break;
		case 3:printf("Enter the element to search:");
				scanf("%d",&y);
				temp=search(&root,y);
				if(temp!=NULL){
					printf("element found");
				}
				else{
					printf("element not found");
				}
				break;
		case 4:printf("Enter the nod to delete:");
				scanf("%d",&del);
				deletes(&root,del);
				break;
		case 5:
			break;
		default:
			printf("enter the valid choice");
			scanf("%d",&choice);
				
		
	}
}while(choice!=4);
}
