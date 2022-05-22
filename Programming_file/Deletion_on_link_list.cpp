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
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
void insertAtEnd(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = n;
}
void deleteAtHead(node* &head){
    if(head==NULL){
        return;
    }
    node* temp = head;
    head = head->next;
    delete temp;
}
void deleteAtVal(node* &head,int val){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteAtHead(head);
    }

    node* temp = head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}
int main(){
    node* head =NULL;
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);
    insertAtEnd(head,5);
    insertAtEnd(head,6);
    display(head);
    //deleteAtVal(head,4);
    deleteAtHead(head);
    display(head);
    return 0;
}