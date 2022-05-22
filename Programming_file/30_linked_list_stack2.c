#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct Node *top)
{
    struct Node *p = (struct Node *)malloc(sizeof(struct Node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct Node *push(struct Node *top, int x)
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

int pop(struct Node *tp)
{
    if (!isEmpty(tp))
    {
         struct Node *n = tp;
        top = n->next;
        int x = n->data;
        free(n);
        return x;
    }
    else
    {
        printf("Stack Underflow\n");
    }
}

int main()
{
    top = push(top, 78);
    top = push(top, 76);
    top = push(top, 88);
    top = push(top, 56);

    linkedListTraversal(top);

    int element = pop(top);
    printf("Popped element is %d\n", element);
    linkedListTraversal(top);
    return 0;
}