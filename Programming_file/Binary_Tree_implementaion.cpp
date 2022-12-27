#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int x){
            this->data = x;
            this->left = NULL;
            this->right = NULL;
        }
};

Node* maxBST(Node* root){
    Node* max = root;
    while(max->right != NULL){
        max = root;
        root = root->right;
    }
    return max;
}

Node* DeleteNode(Node *root,int s){

    if(root == NULL){
        return root;
    }

    if(root->data == s){

        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }

        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }

        if(root->left != NULL && root->right != NULL){
            Node* leftmax = maxBST(root->left);
            root->data = leftmax->data;
            return DeleteNode(root->left,leftmax->data);
        }

    }

    if(root->data < s){
        root->right = DeleteNode(root->right,s);
    }
    else{
        root->left = DeleteNode(root->left,s);
    }

    return root;
}

Node* BuiltBST(Node* root,int val){

    if(root == NULL){
        return new Node(val);
    }

    if(root->data < val){
        root->right = BuiltBST(root->right,val);
    }
    else{
        root->left = BuiltBST(root->left,val);
    }

    return root;
}

void inOrder(Node* root){

    if(root == NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void preOrder(Node* root){

    if(root == NULL){
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node* root){

    if(root == NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}


int main(){

    Node* root = NULL;
    // root = BuiltBST(root,val);
    int ch,val,s;

    do{
        cout<<"1 . insert element in BST"<<endl;
        cout<<"2 . Delete element in BST"<<endl;
        cout<<"3 . show Preorder"<<endl;
        cout<<"4 . show Inorder"<<endl;
        cout<<"5 . show PostOrder"<<endl;
        cout<<"6 . Exit"<<endl;
        cout<<"     Enter the choice :"<<endl;
        cin>>ch;

        cout<<"\n\n\n\n\n\n\n";

        switch(ch)
        {
            case 1:
            cout<<"Enter the element : "<<endl;
            cin>>val;
            root = BuiltBST(root,val);
            break;

            case 2:
            cout<<"Enter the element which deleted"<<endl;
            cin>>s;
            root = DeleteNode(root,s);
            break;

            case 3:
            preOrder(root);
            cout<<endl;
            break;

            case 4:
            inOrder(root);
            cout<<endl;
            break;

            case 5:
            postOrder(root);
            cout<<endl;
            break;

            default:
            cout<<" Invalid choice"<<endl;
        }

    }while(ch != 6);

    return 0;
}