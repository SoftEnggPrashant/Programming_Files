#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *f=NULL;
struct Node *r=NULL;
void display(struct Node *ptr)
{
    printf("printing the queue elements\n");
    while (ptr!=NULL)
    {
        printf("queue element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
    
}
void enqueue(int val)
{
struct Node *n = (struct Node *)malloc(sizeof(struct Node));
   if (n==NULL)
   {
       printf("queue is full\n");
   }
   else
   {
       n->data=val;
       n->next=NULL;
       if (f==NULL)
       {
           f=r=n;
       }
       else
       {
           r->next=n;
           r=n;
       }
   }
   
}
int dequeue()
{
    int y=-1;
    struct Node *ptr=f;
   if(f==r)
   {
       printf("queue is Empty\n");
   }
   else
   {
       f=f->next;
       y=ptr->data;
       free(ptr);
   }
   return y;
}
int main()
{
    printf("dequeue element is%d\n",dequeue());
    enqueue(56);
    enqueue(34);
    enqueue(87);
    enqueue(89);
    display(f);
    printf("dequeue element is%d\n",dequeue());
    display(f);
    return 0;
}