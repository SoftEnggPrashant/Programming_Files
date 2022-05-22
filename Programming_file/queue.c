#include<stdio.h>
#include<stdlib.h>
struct queue
{
    int size;
    int f,r;
    int* arr;
};
int main()
{
    struct queue *s;
    s->size=100;
    s->f= s->r =-1;
    s->arr=(int*)malloc(s->size*sizeof(int));
    return 0;
}
