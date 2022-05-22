#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int * arr;
    int top;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top==-1)
    {
        /* code */
        return 1;
    }
    else
    {
        return 0;
    }
       
}
int isFull(struct stack *ptr)
{
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else
    {
        return -1;
    }
    
}
int main()
{
struct stack *s=(int *)malloc(s->size*sizeof(int));
s->size=20;
s->top=-1;
s->arr = (int *)malloc(s->size*sizeof(int));
  
  printf("stack is:%d\n",isEmpty(s));
  return 0;  
}
