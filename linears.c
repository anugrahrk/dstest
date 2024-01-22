#include<stdio.h>
int main()
{
int i,ar[10],n,item,flag=0;
printf("Enter the limit of array");
scanf("%d",&n);
printf("Enter the elements to array");
for(i=0;i<n;i++)
{
scanf("%d",&ar[i]);
}
printf("Enter the elements to be searched");
scanf("%d",&item);
for(i=0;i<n;i++)

{
if(ar[i]==item)
{
printf("%d element is found at the %d position",item,i+1);
flag++;
break;
}
}
if(flag==0)
{
printf("Element not found in the array");
return 0;
}
}