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

int hightOfTree(Node* root){
    if(root==NULL){
        return 0;
    }
    int lefthight = hightOfTree(root->left);
    int rhight = hightOfTree(root->right);
    return max(lefthight,rhight)+1;
}

int sumOfNodes(Node* root){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int sumnode =0;

    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            sumnode++;
            if(node->left)
               q.push(node->left);
            if(node->right)
               q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
    return sumnode;
}
int sumAtk(Node* root,int k){
    if(root==NULL){
        return -1;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level =0;
    int sum =0;
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node!=NULL){
            if(level==k){
                sum+=node->data;
            }
            if(node->left)
              q.push(node->left);
            if(node->right)
              q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
            level++;
        }
    }
    return sum;
}

void LevelOrderTravel(Node* root){
    if(root==NULL){
        return;
    }
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* node = q.front();
        q.pop();
        if(node != NULL){
            cout<<node->data<<" ";
            if(node->left)
              q.push(node->left);

            if(node->right)
              q.push(node->right);
        }
        else if(!q.empty()){
            q.push(NULL);
        }
    }
}



int main(){
     Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // LevelOrderTravel(root);
    // cout<<sumAtk(root,2)<<endl;
    cout<<sumOfNodes(root)<<endl;
    cout<<hightOfTree(root)<<endl;

    return 0;
}