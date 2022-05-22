#include<stdio.h>
int size=4;
int f,r;
int queue[4];
int isFull(int f,int r)
{
    if((r+1)%size==f)
    {
        return 1;
    }
    else{
    return 0;
    }
}
int isEmpty(int r)
{
    if (f==r)
    {
        return 1;
    }
    else{
    return 0;
    }
}
void enqueue(int data)
{
  if (!isFull(f,r))
  {
    r=(r+1)%size;
    queue[r]=data;
    printf("the enqueue element is:%d\n",data);
  }
    else
    {
        printf("queue is overflow\n");
    }
    
}
int dequeue()
{
    if (!isEmpty(r)&&f!=r)
    {
        f=(f+1)%size;
        int y=queue[f];
        printf("the dequeue element is:%d\n",y);
        return y;
    }
    else
    {
        printf("queue is underflow\n");
    }
    
}
int main()
{
    int size=4;
    int queue[size];
   int f=0;
   int r=0;
   enqueue(5);
   enqueue(7);
   enqueue(6);
  // enqueue(9);
   
   dequeue();
   dequeue();
   dequeue();
  // dequeue();
  enqueue(78);
  enqueue(65);
  enqueue(69);
   //printf("queue is full:%s\n",isFull(f,r)?"true":"false");
  // printf("queue is Empty:%s\n",isEmpty(r)?"true":"false");
    printf("queue is Full:%d\n",isFull(f,r));
    printf("queue is Empty:%d\n",isEmpty(r));

    return 0;
}