#include<stdio.h>
#include<stdlib.h>
struct stack
{
    int size;
    int *arr;
    int top;
};
    struct stack *s;
int main()
{
    s->size=10;
    s->top=-1;
    s->arr=(struct stack *)malloc(sizeof(struct stack));
    return 0;
}
