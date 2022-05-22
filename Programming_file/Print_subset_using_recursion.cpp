#include<bits/stdc++.h>
using namespace std;
void subset(string s,string str,int i){
    if(s.size()==i){
        cout<<str<<" ";
        return;
    }
    subset(s,str+s[i],i+1);
    subset(s,str,i+1);
}
void subset1(string s,string str,vector<string>&v){
    if(s.size()==0){
        // cout<<str<<" ";
        return;
    }
    string op1 = str;
    string op2 = str;

    op2.push_back(s[0]);
    s.erase(s.begin()+0);
    subset1(s,op1,v);
    subset1(s,op2,v);
    v.push_back(op2);
}
int main(){
    int i=0;
    string s = "abc";
    string str;
    vector<string> v;
    // subset(s,str,i);
    subset1(s,str,v);
    sort(v.begin(),v.end());
    for(auto i: v)
        cout<<i<<" ";

    cout<<endl;
    return 0;
}