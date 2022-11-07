#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void peak();
void display();
struct node
{
	int data;
	struct node*next;
};
struct node *new_node,*temp,*temp,*top=0;
int main()
{
	int choice,n;
	
	
	printf("\nl.Push\n2.Pop\n3.Peak\n4.Display\n5.exit\n");
	do{
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			   push();
			   break;
		case 2:
		       pop();
			   break;
		case 3:
		       peak();
		       break;
		case 4:
		       display();
		       break;
		case 5:
			  break;
		default:
			printf("invalid");
			break;
		
	}
			
	}while(choice!=5);
	
}
void push()
{

		new_node=(struct node*)malloc(sizeof(struct node));
		printf("Enter the data:");
		scanf("%d",&new_node->data);
		new_node->next=top;
		top=new_node;
	
}
void pop()
{
	if(top==NULL)
	{
		printf("Stack underflow");
	}
	else
	{
		temp=top;
		top=temp->next;
		printf("The popped value is %d",temp->data);
		free(temp);
		
	}
}
void peak()
{
	if(top==0)
	{
		printf("The stack is empty");
	}
	else
	{
		printf("The peak element is %d",top->data);
	}
}
void display()
{
	temp=top;
	if(temp==0)
	{
		printf("The stack is empty");
	}
	else
	{
		while(temp!=0)
		{
		printf("%d\t",temp->data);
		temp=temp->next;
		}
	}
}

