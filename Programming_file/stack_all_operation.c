#include<stdio.h>

int size=10;
int stack[10];
int top = -1;

int isEmpty()
{
    if(top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}

int isfull()
{
    if(top == size-1)
    {
        return 1;
    }
    else
    {
       return 0;
    }
    
}
int stacktop()
{
    return stack[top];
}
 int peek()
{
    for (int i = 0; i<=top; i++)
    {
        printf("stack element is:%d\n",stack[i]);
    }
    return size;    
}
int pop()
{
    int data;
     if(!isEmpty())
    {
        data = stack[top];
        top = top-1;
        return data;
    }
    else
    {
      printf("stck is underflow \n");
    }
    
    
}
int push(int data)
{   
    if (!isfull())
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
    push(41);
    push(5);
    push(7);
    push(9);
    push(4);
    push(6);
    push(8);
    push(10);
    push(312);
    push(15);
    push(16);
    printf("the stack element size is %d\n",peek());
    printf("the stack top of element is %d\n",stacktop());
    printf("the stack pop element is %d\n",pop());
    printf("the stack pop element is %d\n",pop());
    printf("the stack element size is %d\n",peek());
    printf("the stack top of element is %d\n",stacktop());
    printf("\nstack is Empty\n%s",isEmpty()?"true":"false");
    printf("\nstack is Full \n%s",isfull()?"true":"false");

    return 0;
    
}