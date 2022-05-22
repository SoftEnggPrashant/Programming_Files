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

void insertAfterElement(int x ,int s){
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* n = new Node(x);
        Node* temp = Head;
        while(temp->data != s){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        n->next->prev = n;
        n->prev = temp;
    }
}

void insertBeforElement(int x,int s){

    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* n = new Node(x);
        Node* temp = Head;

        while(temp->data != s){
            temp = temp->next;
        }

        n->next = temp;
        temp->prev->next = n;
        n->prev = temp->prev;
        temp->prev = n;
    }
}

void DeleteAtbegin(){
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* temp = Head;
        Head = temp->next;
        Head->prev = NULL;
        cout<<"Deleted Node : "<<temp->data<<endl;
        delete temp;
    }
}

void DeleteAtend(){
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* temp = Head;
        while(temp->next != NULL){
            temp = temp->next;
        }

        temp->prev->next = NULL;
        cout<<"Deleted Node : "<<temp->data<<endl;
        delete temp;
    }
}

void DeleteBeforElement(int s){
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* temp = Head;
        while(temp->data != s){
            temp = temp->next;
        }
        Node* del = temp->prev;
        temp->prev = del->prev;
        del->prev->next = temp;
        cout<<"Deleted Node : "<<del->data<<endl;
        delete del;
    }
}

void DeleteAfterElement(int s){
    
    if(Head == NULL){
        cout<<"Invalid operation"<<endl;
    }
    else{
        Node* temp = Head;
        while(temp->data != s){
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = del->next;
        del->next->prev = temp;
        cout<<"Deleted Node : "<<del->data<<endl;
        delete del;
    }
}

void list(){
    Node* temp = Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

void reverseList(){
    Node* temp = Head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* rev = temp;
    while(rev != NULL){
        cout<<rev->data<<" ";
        rev = rev->prev;
    }
    cout<<endl;
}

int main(){

    int n;
    int val,s;
    do{
        cout<<"1 . insertAtbegin"<<endl;
        cout<<"2 . insertAtend"<<endl;
        cout<<"3 . insertbeforElement"<<endl;
        cout<<"4 . insertAfterElement"<<endl;
        cout<<"5 . DeleteAtbegin"<<endl;
        cout<<"6 . DeleteAtendl"<<endl;
        cout<<"7 . DeletebeforElement"<<endl;
        cout<<"8 . DeleteAfterElement"<<endl;
        cout<<"9 . list"<<endl;
        cout<<"10 . revserList"<<endl;
        cout<<"11 . Exit"<<endl;
        cout<<"          Enter the choice :"<<endl;
        cin>>n;
        switch(n){
            case 1:
            cout<<"Enter the value"<<endl;
            cin>>val;
            insertAtbegin(val);
            break;
            
            case 2:
            cout<<"Enter the value"<<endl;
            cin>>val;
            insertAtend(val);
            break;

            case 3:
            cout<<"Enter the which element are insert before "<<endl;
            cin>>s;
            cout<<"Enter the inserted element"<<endl;
            cin>>val;
            insertBeforElement(val,s);
            break;

            case 4:
            cout<<"Enter the which element are insert After"<<endl;
            cin>>s;
            cout<<"Enter the inserted element"<<endl;
            cin>>val;
            insertAfterElement(val,s);
            break;

            case 5:
            DeleteAtbegin();
            break;

            case 6:
            DeleteAtend();
            break;

            case 7:
            cout<<"Enter which element the before data delete "<<endl;
            cin>>s;
            DeleteBeforElement(s);
            break;

            case 8:
            cout<<"Enter which element the After data delete "<<endl;
            cin>>s;
            DeleteAfterElement(s);
            break;

            case 9:
            list();
            break;

            case 10:
            reverseList();
            break;
        }
    }while(n != 11);
    return 0;
}