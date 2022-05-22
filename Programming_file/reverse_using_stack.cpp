#include<bits/stdc++.h>
using namespace std;
void reverse(string st){
    stack<string> s;
    for(int i=0;i<st.length();i++){
        string word = "";
        while(st[i] !=' ' && i<st.length()){
            word+=st[i];
            i++;
        }
        s.push(word);
    }
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }cout<<endl;
}
int main(){
    string s = "how, are you doing?";
    reverse(s);

    return 0;
}