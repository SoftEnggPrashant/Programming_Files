#include<stdio.h>
#include<stdlib.h>
struct Node
{
    /* data */
    int data;
    struct Node *next;

};
void traversh(struct Node *ptr )
{
    struct Node *p = ptr;
     do
     {
         /* code */
         printf("elementis:%d\n",p->data);
         p = p->next;
     }
     while(p!=ptr);


    printf("\n");
}

struct Node * insertAtindex(struct Node *ptr,int index,int element)
{
    struct Node * ptr1 = (struct Node *)malloc(sizeof(struct Node *));
     struct Node *p = ptr;
         ptr1->data = element;

     for(int i = 0;i = index-1;i++)
     {
         p = p->next;
     }

         ptr1->next = p->next;
         p->next = ptr1;


     return(ptr);

}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
    struct Node *five;

    head = (struct Node *)malloc(sizeof(struct Node *));
    second = (struct Node *)malloc(sizeof(struct Node *));
    third = (struct Node *)malloc(sizeof(struct Node *));
    fourth = (struct Node *)malloc(sizeof(struct Node *));
    five = (struct Node *)malloc(sizeof(struct Node *));


    head->data = 7;
    head->next = second;

    second->data = 9;
    second->next = third;

    third->data = 45;
    third->next = fourth;

    fourth->data = 78;
    fourth->next = five;

    five->data = 56;
    five->next = head;

     traversh(head);
    // head=delfirst(head);
    head = insertAtindex(head,3,10);
     traversh(head);
    return 0;

}
