#include<bits/stdc++.h>
using namespace std;
void allsub(string s,string temp,vector<string>&ans){
    if(s.size()==0)return;
    string op1 = temp;
    string op2 = temp;

    op2.push_back(s[0]);
    allsub(s,op2,ans);
    allsub(s,op1,ans);
    ans.push_back(op2);
}
int main(){
    vector<int> v = {1,2,3,4,5};
    string s;
    for(auto i:v)
        s+=to_string(i);
    string temp;
    vector<string> str;
    allsub(s,temp,str);
    for(auto ii:str)
        cout<<ii<<endl;
    return 0;
}