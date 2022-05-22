#include<bits/stdc++.h>
using namespace std;
int prece(char s){
    if(s=='^'){
        return 3;
    }
    else if(s=='/'||s=='*'){
        return 2;
    }
    else if(s=='+'|| s=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixpost(string s){
    stack<char> st;
    string res;
    for(int i=0;i<s.length();i++){
     if(s[i]>='a'&& s[i]<='z'){
         res+=s[i];
     }
     else if(s[i]=='('){
         st.push(s[i]);
     }
     else if(s[i]==')'){
         while(!st.empty()&& st.top()!='('){
             res+=st.top();
             st.pop();
         }
         if(!st.empty()){
             st.pop();
         }
     }
     else{
         while(!st.empty()&&prece(st.top())>prece(s[i])){
             res+=st.top();
             st.pop();
         }
         st.push(s[i]);
     }

    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    return res;
}
int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout<<infixpost(s)<<endl;

    return 0;
}