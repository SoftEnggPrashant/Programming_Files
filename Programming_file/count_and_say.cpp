#include<bits/stdc++.h>
using namespace std;

string countAndSay(int n){

    if(n==1)return "1";
    string s="1";
    int count =1;
    for(int i=2;i<=n;i++){
        string ans;
        for(int j=0;j<s.length();j++){
            if(s[j]==s[j+1]){
                count++;
            }
            else{
                ans+=to_string(count)+s[j];
                count =1;
            }
        }
        s=ans;
    }
    return s;
}
int main(){

    int n=5;
     cout<<countAndSay(n)<<endl;
    // string s = "avsx";
    // cout<<s.length()<<endl;

    return 0;
}