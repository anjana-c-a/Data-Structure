#include <stdio.h>
void main()
{
    int u[10]={1,2,3,4,5,6,7,8,9,10}, b[20],n,a[20],k=0,i,j,count;
    printf("enter the number of elements of the set:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=0;j<10;j++)
        {
            if(b[i]==u[j])
            {
                count=count+1;
            }
            
        }
        if(count>0)
        {
            a[k]=1;
        }
        else
        {
            a[k]=0;
        }
        k++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
