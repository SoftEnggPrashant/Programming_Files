#include<iostream>
#include<queue>
using namespace std;

class node{

    public:
        int data;
        node* left;
        node* right;
    node(int d){
        data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};
node* buildBinaryTree(node* root){
    cout<<"enter the data"<<endl;
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }
    root = new node(data);
    cout<<"enter the data insert root left"<< data<<endl;
    root->left = buildBinaryTree(root->left);
    cout<<"enter the data insert root right"<<data<<endl;
    root->right = buildBinaryTree(root->right);
    return root;
}
void LevelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        cout<<temp->data<<" ";
        q.pop();

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
}
int main(){

    node* root = NULL;

    root = buildBinaryTree(root);
    LevelOrderTraversal(root);
    return 0;
}
//1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1