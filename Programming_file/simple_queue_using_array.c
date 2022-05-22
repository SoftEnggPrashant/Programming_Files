#include<stdio.h>
#include<stdlib.h>
/*struct queue
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
}*/ int size=10;
    int arr[10];
    int f=0;
    int r=-1;

int isEmpty(int r)
{
  if (r==-1)
  {
      return 1;
  }
  else
  {
      return 0;
  }
  
}
int isFull(int r,int f)
{
    if (r==size-1)
    {
        return 1;
    }
    return 0;
}
void enqueue(int data)
{
    if (!isFull(r,f))
    {
        r++;
        arr[r]=data;
    }
    else
    {
        printf("queue is full\n");
    }
        
}
int dequeue()
{
    if(!isEmpty(r))
    {
        int t=arr[f];
        f++;
        return t;
    }
    else
    {
        printf("queue is Empty\n");
    }
    
}
int main()
{
  //  int size=20;
  //  int arr[size];
  //  int f,r;
  //  f = r =-1;
     enqueue(4); 
     enqueue(23); 
     enqueue(46); 
     enqueue(45); 
     enqueue(78); 
     enqueue(96);
    for(int i=0;i<=r;i++)
    {
     int y=dequeue();
     printf("the dequeue element is:%d\n",y);
    }    
    printf("queue is Empty:%s\n",isEmpty(r)?"true":"false");
    printf("queue is Full:%s\n",isFull(r,f)?"true":"false");
    return 0;
}