#include<iostream>
using namespace std;

class node
{
    public:
        int data;
        node* left;
        node* right;

        node(int x){
            this->data = x;
            this->left = NULL;
            this->right = NULL;
        }
};

node* constructBST(node* root,int da){
    if(root == NULL){
        root = new node(da);
        return root;
    }
    if(da > root->data){
        root->right = constructBST(root->right,da);
    }
    else{
        root->left = constructBST(root->left,da);
    }
    return root;
}


void inOrder(node* root){
    if(root == NULL){
        return;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void getInput(node* &root){
    int n;
    cout<<"enter the data"<<endl;
    cin>>n;
    while(n != -1){
        root = constructBST(root,n);
        cin>>n;
    }
}

bool serachNode(node* root,int s){
    if(root == NULL){
        return false;
    }
    if(root->data == s){
        return true;
    }
    if(s > root->data){
        return serachNode(root->right,s);
    }
    else{
        return serachNode(root->left,s);
    }
}

int maxElementBST(node* root){
    node* temp = root;
    while(temp->right){
        temp = temp->right;
    }
    return temp->data;
}

int minElementBST(node* root){
    node* temp = root;
    while(temp->left){
        temp = temp->left;
    }
    return temp->data;
}

node* DeleteFromBST(node* root,int val){
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left != NULL && root->right == NULL){
            node* temp = root->left;
            delete root;
            return temp;
        }
        else if(root->left == NULL && root->right != NULL){
            node* temp = root->right;
            delete temp->right;
            return temp;
        }
        else if(root->left != NULL && root->right != NULL){
            int rightmini = minElementBST(root->right);
            root->data = rightmini;
            root->right = DeleteFromBST(root->right,rightmini);
            return root;
        }
    }
    else if(val > root->data){
        root->right = DeleteFromBST(root->right,val);
    }
    else{
        root->left = DeleteFromBST(root->left,val);
    }
    return root;
}
int main(){
    node* root = NULL;
    getInput(root);
    inOrder(root);
    cout<<endl;
    cout<<serachNode(root,6)<<endl;
    // cout<<minElementBST(root)<<endl;
    // cout<<maxElementBST(root)<<endl;
    node* temproot = DeleteFromBST(root,21);
    inOrder(temproot);

    return 0;
}