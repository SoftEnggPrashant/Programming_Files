#include<iostream>
#include<stack>
using namespace std;
void Add(stack<int> &st,int temp){
    if(st.size()==0 || st.top()<= temp){
        st.push(temp);
        return;
    }
    int val = st.top();
    Add(st,temp);
    st.push(val);
}
void solve(stack<int> &st){
    if(st.size()==1)return;
    int temp = st.top();
    st.pop();
    solve(st);
    Add(st,temp);
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(1);
    st.push(0);
    st.push(5);
    solve(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}