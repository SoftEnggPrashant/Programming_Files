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

void insertAtend(int x){
    if(Head == NULL){
        Node* n = new Node(x);
        Head = n;
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


void DeleteAtbegin(){
    if(Head == NULL){
        cout<<"Operation Invalid Queue is Empty "<<endl;
    }
    else if(Head->next == NULL){
        Node* temp = Head;
        delete temp;
        Head = NULL;
    }
    else{
        Node* temp = Head;
        Head = temp->next;
        Head->prev = NULL;
        cout<<"Deleted Node : "<<temp->data<<endl;
        delete temp;
    }
}

void push(int val){
    insertAtend(val);
}

void pop(){
    DeleteAtbegin();
}

int front(){
    return Head->data;
}

void list(){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

int main(){

    int ch;
    int val,a;

    do{
        cout<<"1 . Enqueue "<<endl;
        cout<<"2 . Dequeue pop "<<endl;
        cout<<"3 . front value "<<endl;
        cout<<"4 . list element "<<endl;
        cout<<"5 . Exit "<<endl;
        cout<<"          Enter the choice : "<<endl;
        cin>>ch;
        cout<<"\n\n\n\n";

        
        switch(ch)
        {
            case 1:
            cout<<"Enter the value :"<<endl;
            cin>>val;
            push(val);
            break;

            case 2:
            pop();
            break;

            case 3:
            a = front();
            cout<<"The front element of the queue :"<<a<<endl;
            break;

            case 4:
            list();
            break;

        }
    }while(ch != 5);
    return 0;
}