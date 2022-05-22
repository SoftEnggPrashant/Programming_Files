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
void insertAtend(node* &head,int val){  
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}
void insertAthead(node* &head,int val){
      node* n = new node(val);
      n->next=head;
      head = n;    
}
void deleteAtend(node* &head){
    node* temp = head;
    while(temp->next==NULL){
        temp = temp->next;
    }
    delete temp;
}
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
bool search(node* head,int key){
    node* temp = head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp= temp->next;
    }
    return false;
}
int main(){
    node* head = NULL;
    insertAtend(head,1);
    insertAtend(head,2);
    insertAtend(head,3);
    insertAtend(head,4);
    insertAtend(head,6);
    insertAthead(head,5);
    display(head);
    deleteAtend(head);
    display(head);
   // cout<<search(head,4)<<endl;

    return 0; 
}