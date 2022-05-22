#include <stdio.h>

char size = 20;
char exp[20]="[4-6]((8){(9-8)})";
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
int isFull()
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
char push(char x)
{
    if (!isFull())
    {
        top = top + 1;
        exp[top] = x;
        return exp[top];
    }
    else
    {
        printf("stack overflow\n");
    }
}
char pop()
{
    if (!isEmpty())
    {
        char y = exp[top];
        top = top - 1;
        return y;
    }
    else
    {
        printf("stack is underflow\n");
    }
}

    int match(char a, char b)
    {
        if (a == '(' && b == ')')
        {
            return 1;
        }
        else if (a == '{' && b == '}')
        {
            return 1;
        }
        else if (a == '[' && b == ']')
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    int parenthesis(char exp[])
    {
        char size = 20;
        char stack[20];
        int top = -1;
        char f;
        for (char i = 0; i < size - 1; i++)
        {
            if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            {
                push(exp[i]);
            }
            if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
            {
                 if (!isEmpty())
                {
                    f = pop();
                }
                if(match(f,exp[i]));
               {
                   return 1;
               }
              return 0;
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
        printf("parenthesis is match:%d\n", parenthesis(exp));
        if (parenthesis(exp))
        {
            printf("parenthesis is match: \n");
        }
        else
        {
            printf("parenthesis is not match: \n");
        }

        printf("stack is Empty:%s\n", isEmpty() ? "true" : "false");
        printf("stack is Full:%s\n", isFull() ? "true" : "false");
        return 0;
    }