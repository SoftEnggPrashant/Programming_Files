#include<bits/stdc++.h>
using namespace std;
bool match(string s){
    stack<char> st;
    bool ans = true;

    for(int i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='['||s[i]=='{'){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('&& !st.empty()){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        }
        else if(s[i]==']'){
            if(st.top()=='['&& !st.empty()){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        }
        else if(s[i]=='}'){
            if(st.top()=='{'&& !st.empty()){
                st.pop();
            }
            else{
                ans =false;
                break;
            }
        } 
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}
int main(){
    string s="]";
    if(match(s)){
        cout<<"paranthesis is match"<<endl;
    }
    else{
        cout<<"paranthesis is not match"<<endl;
    }

    return 0;
}