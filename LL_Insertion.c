#include<stdio.h>
#include<malloc.h>
void begining();
void position();
void end();
	struct node
	{
		int data;
		struct node*next;
	}*start=NULL;
	struct node *new_node,*temp;
	int main()
{
	int a,choice;
	do{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(start==NULL)
	{
		start=new_node;
		temp=new_node;
	}
	else
	{
	temp->next=new_node;
	temp=new_node;
	}
	printf("Add more?(1?0):");
	scanf("%d",&a);
	}while(a==1);
	printf("\nThe linked list is:");
	for(temp=start;temp!=NULL;temp=temp->next)
	printf("%d ->",temp->data);
	printf("null");

	
	printf("\nl.Insertion at the begining\n2.Insertion at a position\n3.Insertion at the end\n4.Exit\n");
		do{
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			   begining();
			   break;
		case 2:
		       position();
			   break;
		case 3:
		       end();
		       break;
		
		case 4:
			  break;
		default:
			printf("invalid");
			break;
		
	}
			
	}while(choice<=4);
	
}
void begining()
{
	int value,b;
	do{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&value);
	
	new_node->data=value;
	new_node->next=start;
	start=new_node;
	
		
	printf("Add more?(1?0):");
	scanf("%d",&b);
	}while(b==1);
	printf("\nThe linked list is:");
	for(temp=start;temp!=NULL;temp=temp->next)
	printf("%d ->",temp->data);
	printf("null");
	getch();
}
void position()
{
	int pos,i=0;
	printf("Enter the position:");
	scanf("%d",&pos);
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	temp=start;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	new_node->next=temp->next;
	temp->next=new_node;
	for(temp=start;temp!=NULL;temp=temp->next)
	printf("%d ->",temp->data);
	printf("null");
	getch();
}
void end()
{
	int a;
	
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("\nEnter the node element:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	temp=start;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next=new_node;
	for(temp=start;temp!=NULL;temp=temp->next){
	printf("%d ->",temp->data);}
	printf("null");
	getch();
}
