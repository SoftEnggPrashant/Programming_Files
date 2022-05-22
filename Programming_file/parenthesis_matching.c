#include <stdio.h>

char size = 20;
char stack[20] = "4)+((8)(*--$$9))";
int top = -1;

int isEmpty()
{
    if (top == -1)
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
    if (top == size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
char push(char data)
{

    if (!isfull())
    {
        top = top + 1;
        stack[top] = data;
        return stack[top];
    }
    else
    {
        printf("Could not insert data, Stack is full.\n");
    }
}
char pop()
{
    if (!isEmpty())
    {
        char x = stack[top];
        top = top - 1;
        return x;
    }
    else
    {
        printf("stack is underflow\n");
    }
}
int parenthesis(char stack[])
{
    char size = 50;
    char stack1[50];
    int top = -1;
    for (int i = 0; i < size - 1; i++)
    {
        if (stack[i] == '(')
        {
            push('(');
        }
         if (stack[i] == ')')
        {
            if (!isEmpty())
            {
                pop();
            }
        }
    }
    if (isEmpty())
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    if (parenthesis(stack))
    {
        printf("expresion is match\n");
    }
    else
    {
        printf("expresion is not match\n");
    }
     printf("expresion is match:%d\n",parenthesis(stack));
    printf("stack is full:%s\n", isfull() ? "true" : "false");
    printf("stack is Empty:%s\n", isEmpty() ? "true" : "false");
    return 0;
}