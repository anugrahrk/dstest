#include<stdio.h>
int main()
{
    int a[10],i,n,j,t;
    printf("enter the limit of array");
    scanf("%d",&n);
    printf("enter the elemets in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   // for(i=0;i<n;i++)
    //{
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    //}
    printf("sorted array:");
    for(i=0;i<n;i++)
    {
        printf("\n%d",a[i]);

    }
    return 0;

}