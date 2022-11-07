#include<stdio.h>
void main()
{
int arr[100],n,i,d,sort;
printf("enter the number of elements:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("The Sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
for(i=0;i<n-1;i++)
{
for(d=0;d<n-i-1;d++)
{
if(arr[d]>arr[d+1])
{
sort=arr[d];
arr[d]=arr[d+1];
arr[d+1]=sort;
}
}
}
printf("\nThe sorted array is:");
for(i=0;i<n;i++)
{
printf("%d",arr[i]);
}
}
