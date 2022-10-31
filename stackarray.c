#include<stdio.h>
#include<stdlib.h>

int n,arr[100],top=-1;

void push(int);
void pop();
void display();
int main()
{
	int choice,num;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	while(1){
	printf("1.Push\n2.Pop\n3.Display\n4.Exit");
	printf("\nEnter the choice:");
	scanf("%d",&choice);
	switch(choice)
	{
	  case 1: printf("\nEnter the number to insert:");
						scanf("%d",&num);
						push(num);
						break;
		case 2: pop();
						break;
		case 3: display();
						break;
		case 4:exit(0);
		default: printf("wrong selection\n");
	}
}
}
void push(int x)
{
	if(top==n-1)
	{
		printf("Stack is full\n");
	
	}
	else
	{
	 top++;
	 arr[top]=x;
	 printf("Insertion successsfull\n");
	}
}
void pop()
{
 if(top==-1)
	{
		printf("stack is empty \n");
	}
	else
	{
		
		printf("%d deleted \n",arr[top]);
		top--;
		
	}
}
void display()
{
 int i;
 if(top==-1)
 {
	printf("Stack is empty \n");
 }
 else
	{
	 for(i=top;i>=0;i--)
		{
      printf("%d \t",arr[i]);
			
		}
	}
		printf("\n");
}
	
		
	
	
