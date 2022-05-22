#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int> q1;
    int N;
    public:
    Stack(){
        N=0;
    }
    void Push(int x){
        queue<int> q2;
        q2.push(x);
        N++;
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    void Pop(){
        q1.pop();
    }
    int top(){
        return q1.front();
    }
    bool Empty(){
        if(N==0){
            return true;
        }
        return false;
    }
};
int main(){
    Stack st;
    st.Push(1);
    st.Push(2);
    st.Push(3);
    st.Push(4);
    st.Push(5);
    cout<<st.top()<<endl;
    st.Pop();
    cout<<st.top()<<endl;

    return 0;
}