#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *left,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

void swap(int *a,int *b){
    int temp = *a;
    *b=*a;
    *a=temp;
}

void calculatePointer(Node *root,Node **first,Node **mid,Node **last,Node **prev){
    if(root==NULL)return;
    
    calculatePointer(root->left,first,mid,last,prev);
    if(*prev && root->data<(*prev)->data){
        if(!*first){
            *first = *prev;
            *mid = root;
        }else{
            *last = root;
        }
    }
    *prev =root;
    calculatePointer(root->right,first,mid,last,prev);
}
void recoverBST(Node *root){
     Node *first,*mid,*last,*prev;
     first = NULL;
     mid = NULL;
     last = NULL;
     prev = NULL;

     calculatePointer(root,&first,&mid,&last,&prev);
     if(first&&last){
         swap(&(first->data),&(last->data));
     }
     else if(first&&mid){
         swap(&(first->data),&(mid->data));
     }
}

void inOrder(Node *root){
    if(root==NULL)return;
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
int main(){

    struct Node *root = new Node(6);
    root->left = new Node(9);
    root->right = new Node(3);
    root->left->left = new Node(1);
    root->left->right = new Node(4);
    root->right->right = new Node(13);

    inOrder(root);cout<<endl;
    recoverBST(root);
    inOrder(root);cout<<endl;

    return 0;
}