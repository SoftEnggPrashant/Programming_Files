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
void display(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
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
void makeCycle(node* &head,int pos){
    node* temp = head;
    node* Startnode;
    int count=1;
    while(temp->next!=NULL){
        if(count==pos){
            Startnode = temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next = Startnode;
}
bool checkCycle(node* head){
    node* fastptr = head;
    node* slowptr = head;
    while(fastptr!=NULL && fastptr->next!=NULL){
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
        if(fastptr==slowptr){
            return true;
        }
    }
    return false;
}
void terminateCycle(node* &head){
    node* fastptr = head;
    node* slowptr = head;
    do{
        fastptr = fastptr->next->next;
        slowptr = slowptr->next;
    }
    while(fastptr!=slowptr);

    fastptr = head;

    while(slowptr->next != fastptr->next){
        fastptr = fastptr->next;
        slowptr = slowptr->next;
    }
    slowptr->next = NULL;
}
int main(){
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);
    insert(head,5);
    insert(head,6);
    insert(head,7);
    insert(head,8);
    insert(head,9);
    insert(head,10);
    //display(head);
    makeCycle(head,5);
    cout<<checkCycle(head)<<endl;
    terminateCycle(head);
    cout<<checkCycle(head)<<endl;
    display(head);

    return 0;
}