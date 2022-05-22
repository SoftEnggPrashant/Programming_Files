#include<bits/stdc++.h>
using namespace std;
 string reverseWords(string s) {
        vector<string> v;
        string str="";
        string st="";
        for(int i=0;i<s.size();i++){
           str+=s[i];
           if(str.size()!=0 && s[i]==' '|| i==s.size()-1)v.push_back(str);
           if(s[i]==' ')str="";
        }
        for(int i=v.size()-1;i>=0;i--){
            st+=v[i]+" ";
        }
        return st;
    }
int main(){

    string s = "the sky is blue";
    string st = reverseWords(s);
    cout<<st<<endl;
    // string s = "the sky is blue";
    // cout<<s.substr(0,3)<<endl;
    // cout<<s<<endl;

    return 0;
}