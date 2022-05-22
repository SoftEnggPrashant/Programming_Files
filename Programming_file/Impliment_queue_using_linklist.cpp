#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data =val;
        next =NULL;
    }
};
class Queue{
    node* front;
    node* back;
    public:
    Queue(){
        front = NULL;
        back = NULL;
    }
    void push(int val){
        node* n = new node(val);
        if(front==NULL){
            front =n;
            back = n;
            return;
        }
        back->next = n;
        back =n;
    }
    void pop(){
        if(front==NULL){
            cout<<"queue is underflow"<<endl;
            return;
        }
        node* todelete = front;
        front = front->next;
        delete todelete;
    }
    int peek(){
         if(front==NULL){
            cout<<"NO element of the queue"<<endl;
            return -1;
        }
        return front->data;
    }
    bool empty(){
         if(front==NULL){
            return true;
        }
        return false;
    }
};
int main(){
    Queue qu;
    qu.push(1);
    qu.push(2);
    qu.push(3);
    qu.push(4);
    qu.push(5);
    while(!qu.empty()){
        cout<<qu.peek()<<endl;
        qu.pop();
    }
    return 0;
}