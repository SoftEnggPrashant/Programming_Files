#include<bits/stdc++.h>
using namespace std;
#define n 100
class Queue{
    int* arr;
    int front;
    int back;
    public:
    Queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x){
        if(back==n-1){
            cout<<"Queue is overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front==-1){
            front++;
        }
    }
    void pop(){
        if(front==-1||front>back){
            cout<<"Queue is underflow"<<endl;
            return;
        }
        front++;
    }
    int peek(){
         if(front==-1||front>back){
            cout<<"Queue is underflow"<<endl;
            return -1;  
        }
        return arr[front];
    }
    bool empty(){
         if(front==-1||front>back){
            return true;
        }
        return false;
    }
};
int main(){
    Queue qe;
    qe.push(1);
    qe.push(2);
    qe.push(3);
    qe.push(4);
    qe.push(5);
    while(!qe.empty()){
        cout<<qe.peek()<<endl;
        qe.pop();
    }
}