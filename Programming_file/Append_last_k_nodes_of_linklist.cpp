#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next = NULL;
    }
};
void insert(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
int lengthf(node* head){
    int count =1;
    while(head->next!=NULL){
        head = head->next;
        count++;
    }
    return count;
}
node* appendKNode(node* &head,int k){
    node* headNode;
    node* middleNode;
    node* lastNode = head;
    int l = lengthf(head);
    int pos = 1;
    k=k%l;

    while(lastNode->next!=NULL){
        if(pos == l-k){
            headNode=lastNode;
        }
        if(pos == l-k+1){
            middleNode = lastNode;
        }
        lastNode = lastNode->next;
        pos++;
    }
    headNode->next = NULL;
    lastNode->next = head;

    return middleNode;
}
int main(){
    node* head =NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    display(head);
    node* newNode = appendKNode(head,3);
    display(newNode);

    return 0;
}