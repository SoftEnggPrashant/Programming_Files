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
node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
node* reverseRecursion(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead = reverseRecursion(head->next);
    head->next->next = head;
    head->next = NULL;
    return newhead;
}
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    int count =0;
    while(currptr!=NULL && count<k){
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if(nextptr!=NULL){
      head->next = reversek(nextptr,k);
    }
    return prevptr;
}
int main(){

    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
   // insert(head,7);
    display(head);
   // node* newhead = reverse(head);
   // display(newhead);
   // node* newhead1 = reverseRecursion(head);
   // display(newhead1);
    int k=2;
    node* newhead2 = reversek(head,k);
    display(newhead2);
    return 0;
}