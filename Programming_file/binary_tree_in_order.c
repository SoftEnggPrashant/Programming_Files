#include<stdio.h>
#include<malloc.h>

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data){
    struct Node * n = (struct Node*)malloc(sizeof(struct Node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preOrder(struct Node* root){
    if(root!=NULL){
    printf("%d ",root->data);
    preOrder(root->left);
    preOrder(root->right);
    }
}
 
 void postOrder(struct Node* root){
     if (root!=NULL)
     {
      postOrder(root->left);  
      postOrder(root->right);
      printf("%d ",root->data);  
     }
 }

 void inOrder(struct Node* root){
     if (root!=NULL)
     {
      inOrder(root->left);
      printf("%d ",root->data);
      inOrder(root->right);   
     }
 }

int main()
{
 struct Node* p=createNode(5);
 struct Node* p1=createNode(4);
 struct Node* p2=createNode(2);
 struct Node* p3=createNode(6);
 struct Node* p4=createNode(7);
 struct Node* p5=createNode(8);

  p->left=p1;
  p1->left=p5;
  p->right=p2;
  p2->left=p3;
  p2->right=p4;
  printf("this is a preorder traversal \n");
  preOrder(p);
  printf("\n");
  printf("this is a postorder traversal \n");
  postOrder(p);
  printf("\n");
  printf("this is a Inorder traversal \n");
  inOrder(p);
  printf("\n");
  return 0;  
}