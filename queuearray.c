#include<stdio.h>
#include<stdlib.h>

int n,arr[100],rear=-1,front=-1;

void push();
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
	  case 1: push();
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
void push()
{
	int item;
	if(rear==n-1)
	{
		printf("Queue is full");
	}
    else{
		if(front==-1)
			front=0;
			printf("Enter the element to insert:");
			scanf("%d",&item);
			rear=rear+1;
			arr[rear]=item;
			
		}
}
void pop()
{
 if(front==-1 || front>rear)
	{
		printf("Queue is underflow");
	  return;
	}
	else
		{
	        printf("Element deleted from queue is : %d\n", arr[front]);

        front = front + 1;

    }
}
void display()
{
 int i;
	if(front==-1)
	{
		printf("The queue is empty");
	}
  else
		{
    printf("The queue is:");
		for(i=front;i<=rear;i++)
		{
      printf("%d \t",arr[i]);
      printf("\n");
		}
		}
}


