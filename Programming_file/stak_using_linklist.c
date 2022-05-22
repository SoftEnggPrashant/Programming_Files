#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};
struct Node *top = NULL;
void display(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("element is:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        //printf("stack is Empty");
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int isFull(struct Node *top)
{
    struct Node *n = (struct Node *)malloc(sizeof(struct Node));
    if (n == NULL)
    {
        // printf("stack is full");
        return 1;
    }
    else
    {
        return 0;
    }
    
}
struct Node* push(struct Node *top, int x)
{
    if (!isFull(top))
    {
        struct Node *n = (struct Node *)malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
    else
    {     
        printf("Stack Overflow\n");
    }
}

int pop(struct Node *ptr)
{
    if (!isEmpty(top))
    {
        struct Node *p = ptr;
        top = p->next;
        int x = p->data;
        free(p);
        return x;
    }
    else
    {
        printf("stack is underflow\n");
    }
}
int stacktop(struct Node *top)
{
    return top->data;
}
int peek(int index)
{
    struct Node *p=top;
    for (int i = 0; (i <=index-1 && p!=NULL); i++)
    {
        p=p->next;
    }
    if( p!=NULL)
    {
        return p->data;
    }
    else
    {
        return -1;
    }
    
    
}
int isbotom(struct Node *ptr)
{
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if (ptr!=NULL)
    {
      return ptr->data;
    }
    else
    {
        return -1;
    }
    
}
int main()
{
    top = push(top, 56);
    top = push(top, 88);
    top = push(top, 45);
    top = push(top, 33);
    display(top);
   // int y= pop(top);
   // printf("pop element is:%d\n",y);
  //  display(top);
    int z=stacktop(top);
    printf("top of element is:%d\n",z);
    int r=peek(1);
    printf("PEEK element is:%d\n",r);
    int v=isbotom(top);
    printf("botom element is:%d\n",v);
    return 0;
}
