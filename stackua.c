#include <stdio.h>
  int stack[100],top,i,n,choice,item;
void push(void);
void pop(void);
void display(void);
void search(void);
void main()
{
  
    top=-1;
    printf("enter the size of stack");
    scanf("%d",&n);
    printf("Stack Operations");
    printf("_________________");
    printf("\n1.push\n2.pop\n3.display\n4.search\n5.exit");
    do
    {
        
        printf("\nEnter the choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
            break;

            case 2:pop();
            break;

            case 3:display();
            break;

            case 4:search();
            break;

            case 5:printf("exit");
            break;

            default:printf("Invalid Input");
        }
    }
        while(choice!=5);
    }
    void push()
    {
        if(top>=n-1)
        {
            printf("overflow");
        }
        else
        {
        
            printf("enter a element");
            scanf("%d",&item);
            top=top+1;
            stack[top]=item;

        }
    }

    void pop()
    {
        if (top<=-1)
        {
            printf("underflow");
        }
        else
        {
            printf("%d is popped",stack[top]);
            top--;

        }
    }
    void display()
    {
        if(top>=0)
        {
            for(i=0;i<=top;i++)
            {
                printf("\n%d",stack[i]);
            }
        }
        else
        {
            printf("stack is empty");

        }


    }
    void search()
    {
        int flag=0,key=0,i=0,pos=0;
        if(top==-1)
        {
            printf("stack is empty");
        }
        else{

            printf("Enter the element to be seached");
            scanf("%d",&key);
            for(i=top;i>=0;i--)
            {
                if ( key==stack[i])
                 {
                    flag=1;
                    pos=i;
                    break;
                 }

                else{
                    flag=0;
                }
            }
        }
        if(flag==1)
           { 
            printf("%d is found at %d",key,pos);
        
        }
        if(flag==0)
        {
            printf("%d is not found",key);
        }
    }
