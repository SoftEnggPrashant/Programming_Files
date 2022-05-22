#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int mid){
    if(mid==1){
        s.pop();
        return;
    }
    int temp = s.top();
    s.pop();
    solve(s,mid-1);
    s.push(temp);
}
void delmid(stack<int>&s){
    if(s.size()==0)return;
    int a = s.size();
    int mid = (a/2)+1;
    solve(s,mid);
}
int main(){
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    delmid(s);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}