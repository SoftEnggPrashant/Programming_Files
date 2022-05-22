#include<iostream>
#include<climits>
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

Node* buildBST(int preorder[],int *preIdx,int key,int min,int max,int n){

    if(*preIdx>=n){
        return NULL;
    }
    Node* root = NULL;
    if(key>min && key<max){
        root = new Node(key);
        *preIdx = *preIdx+1;
        if(*preIdx<n){
            root->left = buildBST(preorder,preIdx,preorder[*preIdx],min,key,n);
        }
        if(*preIdx<n){
            root->right = buildBST(preorder,preIdx,preorder[*preIdx],key,max,n);
        }
    }
    return root;
}
void preDispaly(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preDispaly(root->left);
    preDispaly(root->right);
}
int main(){
    int preorder[] = {10,2,4,5,9,8,12,34,32};
    int preIdx = 0;
    int n = 9;
    Node* root = buildBST(preorder,&preIdx,preorder[preIdx],INT_MIN,INT_MAX,n);
    preDispaly(root);
    cout<<endl;

    return 0;
}