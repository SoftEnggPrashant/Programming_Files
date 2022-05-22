#include<stdio.h>
#include<stdlib.h>

struct stack
{
    /* data */
    int size;
    int top;
    int *arr;
};
void display(struct stack *ptr)
{
    for (int i = 0; i < ptr->size-1; i++)
    {
        printf("element is:%d\n",ptr->arr[i]);
    }

}
int isfull(struct stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        //printf("stack is full");
        return 1;
    }
}
int isempty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
       // printf("stck is empty");
       return -1;
    }

}
int main()
{
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size *sizeof(int));
    int n;
    printf("enter the stack element ");
    for(int i=0;i<=s->size;i++)
    {
    scanf("%d\n",&s->arr[n]);

    }
    /*s->arr[0] = 2;
    s->top++;

    s->arr[1] = 5;
    s->top++;

    s->arr[2] = 6;
    s->top++;

    s->arr[3] = 7;
    s->top++;

    s->arr[4] = 9;
    s->top++;

    s->arr[5] = 12;
    s->top++;

    s->arr[6] = 23;
    s->top++;*/

  if(isempty(s))
  {
      printf("stack is Empty");
  }
  else
  {
    printf("stack is not Empty");
  }

  display(s);
    return 0;
}
