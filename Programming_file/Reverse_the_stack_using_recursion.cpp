#include<bits/stdc++.h>
using namespace std;
void insert_stack(stack<int>& st,int temp){
    if(st.size()==0){
        st.push(temp);
        return;
    }
    int val = st.top();
    st.pop();
    insert_stack(st,temp);
    st.push(val);
}
void Reverse_stack(stack<int>&st){
    if(st.size()==1)return;
    int temp = st.top();
    st.pop();
    Reverse_stack(st);
    insert_stack(st,temp);
}
int main(){
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    Reverse_stack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
    return 0;
}