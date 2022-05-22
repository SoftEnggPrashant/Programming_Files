#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int x){
        data =x;
        left = NULL;
        right = NULL;
    }
};
int search(int inorder[],int start,int end,int curr){
    for(int i=start;i<=end;i++){
        if(inorder[i]==curr){
            return i;
        }
    }
    return -1;
}
Node* builtTree(int preorder[],int inorder[],int start,int end){
    static int idx =0;
    
    if(start>end){
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);
    if(start==end){
        return node;
    }
    int pos = search(inorder,start,end,curr);

    node->left = builtTree(preorder,inorder,start,pos-1);
    node->right = builtTree(preorder,inorder,pos+1,end);

    return node;
}
void inorderTravarsal(Node* root){
    if(root == NULL){
        return;
    }
    inorderTravarsal(root->left);
    cout<<root->data<<" ";
    inorderTravarsal(root->right);
}
int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]= {4,2,1,5,3};
    Node* root = builtTree(preorder,inorder,0,4);
    inorderTravarsal(root);

    return 0;
}