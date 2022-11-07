#include<stdio.h>
#include<malloc.h>
void push();
void pop();
void display();
struct node{
	int data;
	struct node*next;
};
struct node *front=0,*rear=0,*temp,*new_node;
int main()
{
	int choice,n;
	
	
	printf("\nl.Push\n2.Pop\n3.Display\n4.exit\n");
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
		       display();
		       break;
		case 4:
			  break;
		default:
			printf("invalid");
			break;
		
	}
			
	}while(choice!=4);
	
}
void push()
{
	new_node=(struct node*)malloc(sizeof(struct node));
	printf("Enter the data:");
	scanf("%d",&new_node->data);
	new_node->next=NULL;
	if(front == 0 && rear==0)
	{
		rear=front=new_node;
		
	}
	else
	{
		rear->next=new_node;
		rear=new_node;
	}
		
}
void pop()
{
	temp=front;
	if(front == 0 && rear==0)
	{
		printf("The queue is empty");
	}
	else
	{
		front=front->next;
		
		printf("%d is popped",temp->data);
		free(temp);
	}
}
void display()
{
	temp=front;
	if(front == -1 || front>rear)
	{
		printf("The queue is empty");
	}
	else
	{
		while(temp != 0)
		{
			printf(" %d \t",temp->data);
			temp=temp->next;
		}
	}
}

