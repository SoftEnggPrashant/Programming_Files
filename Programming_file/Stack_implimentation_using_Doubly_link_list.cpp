#include<iostream>
using namespace std;

class Node
{
    public:
        int data;
        Node* next;
        Node* prev;

        Node(int x){
            this->data = x;
            this->next = NULL;
            this->prev = NULL;
        }
};

Node* Head = NULL;

void insertAtbegin(int x){
    Node* n = new Node(x);
    if(Head == NULL){
        Head = n;
    }
    else{
        n->next = Head;
        Head = n;
    }
}

void insertAtend(int x){
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* n = new Node(x);
        Node* temp = Head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = n;
        n->prev = temp;
    }
}

int DeleteAtend(){
    int res = 0;
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else if(Head->next == NULL){
        Node* temp = Head;
        Head = NULL;
        res = temp->data;
        delete temp;
    }
    else{
        Node* temp = Head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->prev->next = NULL;
        // cout<<"Deleted Node : "<<temp->data<<endl;
        res = temp->data;
        delete temp;
    }
    return res;
}

void push(int val){

    if(Head == NULL){
        insertAtbegin(val);
    }
    else{
        insertAtend(val);
    }
}

int pop(){
    int ans = 0;
    if(Head == NULL){
        cout<<"stack empty Operation invalid"<<endl;
    }
    else{
        ans = DeleteAtend();
    }
    return ans;
}

void list(){
    if(Head == NULL){
        cout<<"Stack is empty"<<endl;
    }
    else{
        Node* temp = Head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        Node* loc = temp;
        while(loc != NULL){
            cout<<loc->data<<" ";
            loc = loc->prev;
        }
    }
}

bool isEmpty(){
    if(Head == NULL){
        return true;
    }
    else{
        return false;
    }
}

int StackTop(){
    Node* temp = Head;
    if(Head == NULL){
        cout<<"Stack is empty"<<endl;
        return -1;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
    }
    return temp->data;
}

int main(){

    int n,val;

    do{
        cout<<"1 . push "<<endl;
        cout<<"2 . pop "<<endl;
        cout<<"3 . stacktop"<<endl;
        cout<<"4 . list"<<endl;
        cout<<"5 . Empty"<<endl;
        cout<<"6 . Exit"<<endl;
        cout<<"    Enter the choice : "<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"Enter the value"<<endl;
            cin>>val;
            push(val);
            break;

            case 2:
            cout<<"poped value "<<pop()<<endl;
            break;

            case 3:
            cout<<"stack top value "<<StackTop()<<endl;
            break;

            case 4:
            cout<<"the stack elements is :"<<endl;
            list();
            break;

            case 5:
            cout<<"stack is empty 1 ans stack is not empty 0 : "<<isEmpty()<<endl;
            break;

            // default:
            // cout<<"Invalid input "<<endl;
        }
    }while(n != 6);

    return 0;
}