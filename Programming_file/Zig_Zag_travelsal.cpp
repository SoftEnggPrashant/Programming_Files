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

void zigZagTraversal(Node* root){
    if(root==NULL) return;

    stack<Node*> currlevel;
    stack<Node*> nextlevel;
    bool leftToright = true;
    currlevel.push(root);

    while(!currlevel.empty()){
        Node* temp = currlevel.top();
        currlevel.pop();
        if(temp){
            cout<<temp->data<<" ";

            if(leftToright){
                if(temp->left){
                    nextlevel.push(temp->left);
                }
                if(temp->right){
                    nextlevel.push(temp->right);
                }
            }
            else{
                if(temp->right){
                    nextlevel.push(temp->right);
                }
                if(temp->left){
                    nextlevel.push(temp->left);
                }
            }
        }
        if(currlevel.empty()){
            leftToright = !leftToright;
            swap(currlevel,nextlevel);
        }
    }
}


// Best Solution
 vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> res;
    	if(root == NULL)
    	    return res;
    	
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight = true;
    	
    	while(!q.empty()){
    	    
    	    int n = q.size();
    	    vector<int> ans(n);
    	    
    	    for(int i=0;i<n;i++){
    	        
    	        Node* node = q.front();
    	        q.pop();
    	        
    	        int index = leftToRight ? i : n-i-1;
    	        ans[index] = node->data;
    	        
    	        if(node->left)
    	            q.push(node->left);
    	            
    	        if(node->right)
    	            q.push(node->right);
    	    }
    	    
    	    leftToRight = !leftToRight;
    	    
    	    for(auto i:ans){
    	        res.push_back(i);
    	    }
    	}
    	return res;
    }

int main(){
     
     Node* root = new Node(12);
     root->left = new Node(9);
     root->right = new Node(15);
     root->left->left = new Node(5);
     root->left->right = new Node(10);
     zigZagTraversal(root);
     cout<<endl;

    return 0;
}