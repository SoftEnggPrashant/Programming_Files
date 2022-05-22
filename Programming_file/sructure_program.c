#include<stdio.h>
#include<stdlib.h>
struct sructure_program
{
    int size;
    int *arr;
    int top;
};
int main()
{
   struct sructure_program *s;
   s->size=10;
   s->top=-1;
   s->arr[s->size]=(struct sructure_program *)malloc(sizeof(struct sructure_program));
   //s->top++;
   //s->arr[s->top]=34;
   //printf("top of element is:",s->arr[s->top]);
   return 0;
}
