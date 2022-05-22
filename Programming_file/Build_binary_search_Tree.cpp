#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *left ,*right;
    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};
Node* BuildBST(Node* root,int val){
    
    if(root==NULL){
        return new Node(val);
    }
    if(val<root->data){
        root->left = BuildBST(root->left,val);
    }
    else{
        root->right = BuildBST(root->right,val);
    }
    return root;
}
void inorder(Node *root){
     if(root==NULL){
         return;
     }
     inorder(root->left);
     cout<<root->data<<" ";
     inorder(root->right);
}
int main(){
    Node *root = NULL;
    root = BuildBST(root,5);
    BuildBST(root,2);
    BuildBST(root,3);
    BuildBST(root,4);
    BuildBST(root,1);
    BuildBST(root,7);
    inorder(root);
    cout<<endl;

    return 0;
}