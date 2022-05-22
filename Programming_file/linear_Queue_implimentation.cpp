#include<iostream>
#define max 10
using namespace std;

class Queue
{
    int f=-1;
    int r=-1;
    int arr[10];

    public:

    bool isFull(){
        if(f == 0 && r == max-1)
            return true;
        else
            return false;
    }

    bool isEmpty(){
        if((f == -1 && r == -1) || f == r)
            return true;
        else
            return false;
    }

    void insert(int data){

        if(f == -1 && r == -1){
            f++;r++;
            arr[r] = data;
        }
        else if(f != 0 && r == max-1){
            int i = 0;
            while(f<=r){
                arr[i++] = arr[f++];
            }
            f = 0
            r = r-f;
        }
        else if(r == max-1 && f == max-1){
            f = r = 0;
        }
        else
           arr[++r] = data;
    }

    int  dequeue(){
        int temp = arr[f++];
        return temp;

    }

    int front(){
        return arr[f];
    }
};

int main(){

    Queue q;
    q.insert(45);
    q.insert(36);
    q.insert(89);
    q.insert(90);
    q.insert(89);
    q.insert(89);
    q.insert(89);
    q.insert(89);
    q.insert(89);
    q.insert(89);

    // cout<<q.front()<<endl;

    // cout<< q.dequeue()<<endl;

    // cout<<q.front()<<endl;

    // cout<< q.dequeue()<<endl;

    // cout<<q.front()<<endl;
    // cout<< q.dequeue()<<endl;

    cout<<q.isEmpty()<<endl;

    cout<<q.isFull()<<endl;



    // cout<<q.isFull()<<endl;




    return 0;
}