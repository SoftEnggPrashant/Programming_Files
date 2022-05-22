#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int Search(int inorder[],int start,int end,int val){
    for(int i= start;i<=end;i++){
        if(inorder[i]==val){
            return i;
        }
    }
    return -1;
}

Node* buildTree(int postorder[],int inorder[],int start,int end){
    static int idx = 4;

    if(start>end){
        return NULL;
    }

    int val = postorder[idx];
    idx--;
    Node* node = new Node(val);
    if(start == end){
        return node;
    }
    int pos = Search(inorder,start,end,val);
    node->right = buildTree(postorder,inorder,pos+1,end);
    node->left = buildTree(postorder,inorder,start,pos-1);

    return node;
}

void inOrderTraval(Node* root){

    if(root==NULL){
        return;
    }
    inOrderTraval(root->left);
    cout<<root->data<<" ";
    inOrderTraval(root->right);
}
int main(){
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};
    Node* root = buildTree(postorder,inorder,0,4);
    inOrderTraval(root);cout<<endl;

    return 0;
}
