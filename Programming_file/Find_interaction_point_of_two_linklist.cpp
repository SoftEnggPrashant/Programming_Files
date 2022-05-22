#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data = val;
        next =NULL;
    }
};
void insert(node* &head,int val){

    node* n = new node(val);
    node* temp = head;
    if(head==NULL){
        head = n;
        return;
    }
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
void makePoint(node* &head1,node* &head2,int pos){

    node* temp1 = head1;
    node* temp2 = head2;
    int count = 1;
    while(temp1->next!=NULL && count<=pos){
        temp1 = temp1->next;
        count++;
    }
    while(temp2->next!=NULL){
        temp2 = temp2->next;
    }

    temp2->next = temp1;
}
int length(node* head){
    int count = 1;
    while(head->next!=NULL){
        head = head->next;
        count++;
    }
    return count;
}
int findIntractionPoint(node* &head1,node* &head2){
    int l1 = length(head1);
    int l2 = length(head2);
    int d = 0;
    node* temp;
    node* tempHead;

    if(l1>l2){
        d=l1-l2;
        tempHead = head1;
        temp = head2;
    }
    else{
        d=l2-l1;
        tempHead = head2;
        temp = head1;
    }
    while(d){
        tempHead = tempHead->next;
        d--;
    }

    while(tempHead->next!=NULL && temp->next!=NULL){
        if(tempHead->next == temp->next){
            return tempHead->next->data;
        }
        tempHead = tempHead->next;
        temp = temp->next;
    }
      return -1;
}
int main(){

    node* head1 = NULL;
    node* head2 = NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,3);
    insert(head1,4);
    insert(head1,5);
    insert(head1,6);
    insert(head1,7);
    insert(head1,8);
    insert(head1,9);
    insert(head1,10);

    insert(head2,2);
    insert(head2,3);
    insert(head2,4);
    insert(head2,5);

    display(head1);
    makePoint(head1,head2,6);
    display(head2);

    cout<<findIntractionPoint(head1,head2)<<endl;

    return 0;

}