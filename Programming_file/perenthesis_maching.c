#include<stdio.h>
 
 int size=20;
 int  stack[20];
 int top = -1;
int isEmpty()
{
    if (top==-1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int isFull()
{
    if (top==size-1)
    {
        return 1;
    }
    else
    {
        return-1;
    }
     
}
int push(int data)
{   
    if (!isFull())
    {
        top = top+1;
        stack[top] = data;
        return stack[top];        
    }
    else
    {
        printf("stack is overflow \n");
    }
    
}
int main()
{
     push(5);
    //printf("stack is full:%s\n",isFull()?"true":"fuals");
   // printf("stack is is Empty:%s\n",isEmpty()?"true":"fuals");
   int a,b;
   a=isFull();
   printf("%d\n",a);
   b=isEmpty();
   printf("%d\n",b);
   printf("stack is full:%s\n",isFull()?"true":"false");
   printf("stack is is Empty:%s\n",isEmpty()?"true":"false");

    return 0;
}