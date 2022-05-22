#include<bits/stdc++.h>
using namespace std;
class Queue{
    stack<int> s1;
    stack<int> s2;
    public:
    void Push(int x){
        s1.push(x);
    }
    int POP(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        int topvalue = s2.top();
        s2.pop();
        return topvalue;
    }
    int Peek(){
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        }
        return s2.top();
    }
    bool Empty(){
        if(s2.empty()&&s1.empty()){
            return true;
        }
        return false;
    }
};
int main(){
    Queue qe;
    qe.Push(1);
    qe.Push(2);
    qe.Push(3);
    qe.Push(4);
    qe.Push(5);

    // cout<<qe.Peek()<<endl;
    while(!qe.Empty()){
        cout<<qe.POP()<<" ";
    }

    return 0;
}