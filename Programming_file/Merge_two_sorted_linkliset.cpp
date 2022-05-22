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
node* merge(node* &head1,node* &head2){

    node* Dommy = new node(-1);
    node* ptr1 = head1;
    node* ptr2 = head2;
    node* ptr3 = Dommy;

    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        }
        else{
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while(ptr1!=NULL){
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }

     while(ptr2!=NULL){
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }

    return Dommy->next;
}
node* mergeRecurgiv(node* &head1,node* &head2){
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    node* result ;
    
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecurgiv(head1->next,head2);
    }
    else{
        result = head2;
        result->next = mergeRecurgiv(head1,head2->next);
    }

    return result;
}
int main(){

//     [1,2,4]
// [1,3,4]

    node* head1 = NULL;
    node* head2 = NULL;
    insert(head1,1);
    insert(head1,2);
    insert(head1,4);
    // insert(head1,7);
    // insert(head1,9);
    // insert(head1,11);

    insert(head2,1);
    insert(head2,3);
    insert(head2,4);
    // insert(head2,8);
    // insert(head2,10);
    // display(head1);
    // display(head2);

    // node* newhead = merge(head1,head2);
    // display(newhead);
    node* newhead1 = mergeRecurgiv(head1,head2);
    display(newhead1);

    return 0;
}