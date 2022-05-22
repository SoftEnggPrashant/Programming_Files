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
int peek()
{
    return stack[top];
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
      printf("not perform the pop operation stack is Empty\n");
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
        printf("push opetaion are not perform stack is full\n");
    }

}
int main()
{
    int a;
    printf("enter the values of stack\n");
    for(int i=0;i<=size;i++)
    {
        scanf("%d",&a);
        push(a);
    }
    printf("stack top of element is:%d\n",peek());
    printf("element is:\n");

    while (!isEmpty())
    {
        /* code */
        int data;
        data = pop();
        printf("%d\n",data);
    }
    printf("stack is Empty:%s\n",isEmpty()?"true":"false");
    printf("stack is full:%s\n",isfull()?"true":"false");

    return 0;

}
