#include<bits/stdc++.h>
using namespace std;
int prece(char c){
    if(c=='-')
      return 0;
    else if(c=='+')
      return 1;
    else if(c=='*')
      return 2;
    else if(c=='/')
      return 3;
    else if(c=='^')
      return 4;
    
    return -1;
}
int main(){

    stack<char> st;
    string infix;
    string postfix;
    int i=0,j=0;

    // cout<<"enter the infix exp"<<endl;
    cin>>infix;

    for(int i=0;i<infix.size();i++){
      if(infix[i]>='A' && infix[i]<='Z')
        postfix+=infix[i];
      else{
        if(st.empty())
          st.push(infix[i]);
        else{
          while(prece(st.top())>prece(infix[i])){
            postfix+=st.top();
            st.pop();
          }
          st.push(infix[i]);
        }
      }
    }

    while(!st.empty()){
        postfix+=st.top();
        st.pop();
    }

    cout<<postfix<<endl;
    return 0;
}