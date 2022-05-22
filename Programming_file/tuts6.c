#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void travers(struct Node * ptr)
{
    while(ptr != NULL)
    {
      printf("element is: %d\n",ptr->data);
      ptr = ptr->next;
    }
}

struct Node * insertAtlast(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    struct Node * p = head;

    while (p->next!=NULL)
    {
        p = p->next;

    }
    ptr->data = data;
    ptr->next = NULL;
    p->next = ptr;
    return head;
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 34;
    head->next = second;

    second->data =23;
    second->next =third;

    third->data =43;
    third->next =fourth;

    fourth->data =56;
    fourth->next =NULL;

    printf("before insertion\n");
    travers(head);
     head = insertAtlast(head, 57);
    printf("after insertion\n");
    travers(head);

    return 0;
}
