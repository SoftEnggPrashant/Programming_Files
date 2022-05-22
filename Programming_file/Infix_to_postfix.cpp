#include<bits/stdc++.h>
using namespace std;
int prece(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*'||c=='/'){
        return 2;
    }
    else if(c=='+'||c=='-'){
        return 1;
    }
    else{
        return -1;
    }
}
string infixeTopostfix(string s){

    reverse(s.begin(),s.end());
    stack<char> st;
    string res;

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            res+=s[i];
        }
        else if(s[i]==')'){
            st.push(s[i]);
        }
        else if(s[i]=='('){
            while(!st.empty()&&st.top()!=')'){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }
        else{
            while(!st.empty() && prece(st.top())>prece(s[i])){
                res+=st.top();
                st.pop();
            }

            st.push(s[i]);
        }
    }
    if(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());

    return res;
}
int main(){
    string s = "(a-b/c)*(a/k-l)";
    cout<<infixeTopostfix(s)<<endl;

    return 0;
}