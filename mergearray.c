#include<stdio.h>
int main()
{
	int a1[100],a2[100],a3[200],n1,n2,n3,i,j;
	printf("Enter the size of first array:");
	scanf("%d",&n1);
	printf("Enter the array elements:");
	
	for(i=0;i<n1;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("Enter the size of second array:");
	scanf("%d",&n2);
	printf("Enter the array elements:");
	for(i=0;i<n2;i++)
	{
		scanf("%d",&a2[i]);
	}
	for(i=0;i<n1;i++)
		{
			a3[i]=a1[i];
			n3=n1+n2;
		}
for(i=0,j=n1;j<n3 && i<n2;i++,j++)
{
	a3[j]=a2[i];
}
printf("\n Merged array");
for(i=0;i<n3;i++)
{
	printf("%d",a3[i]);
}
}
