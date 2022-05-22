#include<bits/stdc++.h>
using namespace std;
void revers(string s){
    if(s.length()==0){
        return;
    }
    string ros = s.substr(1);
    revers(ros);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    revers(s);
    cout<<endl;
    return 0;
}