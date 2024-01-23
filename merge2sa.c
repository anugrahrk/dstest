#include <stdio.h>
int main()
{
    int a1[50],a2[50],merge[100],i=0,j=0,k=0,m,n;
    printf("enter the array limit of two arrays");
    scanf("%d%d",&m,&n);
    printf("enter the sorted elements to array1");
    for(i=0;i<m;i++)
    {
        scanf("%d",&a1[i]);
    }
    printf("enter the sorted elements to array2");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
    }
    i=0;
    j=0;
    while(i<m && j<n)
    {
        if(a1[i]<a2[j])
        {
            merge[k]=a1[i];
            i++;
        }
        else{
            merge[k]=a2[j];
            j++;
        }
        k++;
    }
        while(i<m)
        {
            merge[k]=a1[i];
            i++;
            k++; 
        }
        while(j<n)
        {
            merge[k]=a2[j];
            j++;
            k++;

        }
        printf("Merged array:");
        for(i=0;i<m+n;i++)
        {
         printf("\n %d",merge[i]);
        }
        return 0;
    }
        

        

    