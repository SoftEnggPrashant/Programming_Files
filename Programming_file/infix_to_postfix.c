#include<stdio.h>
#include<string.h>

char size=20;
char infix[20];
char stack[20];
int top=-1;

int isEmpty()
{
  if (top==-1)
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
    if(top==size-1)
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
    if(!isFull())
    {
        top=top+1;
        stack[top]=x;
        return stack[top];
    }
    else
    {
        printf("stack is overflow\n");
    }
}
char pop()
{
  if(!isEmpty())
  {
      char y=stack[top];
      top=top-1;
      return y;
  }
  else
  {
      printf("stack is underflow\n");
  }
}
int operator(char op)
{
    if (op =='+'||op =='-'||op =='*'||op =='/')
    {
        return 1;
    }
    
}
int precedence(char ch)
{
    if (ch=='*'&&ch=='/')
    {
        return 3;
    }
    if (ch=='+'&&ch=='-')
    {
        return 2;
    }
    return 0;
}
char infix_to_postfix(char infix[])
{
    char size=20;
    char stack[20];
    int top=-1;
    char postfix[20];
    int i=0;
    int j=0;
    while (infix[i]=='\0')
    {
        if (!operator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else
        {
            if (precedence(infix[i])>precedence(stack[top]))
            {
                push(infix[i]);
                i++;
            }
            else
            {
                postfix[j]=pop();
                j++;
            }
        }
        
        
    }
    while (!isEmpty())
    {
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char infix[]="a+b+t/6";
    printf("postfix is:%s\n",infix_to_postfix(infix));
        printf("stack is Empty:%s\n", isEmpty() ? "true" : "false");
        printf("stack is Full:%s\n", isFull() ? "true" : "false");
        return 0;
}