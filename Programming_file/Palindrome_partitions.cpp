#include<iostream>
#include<vector>
using namespace std;
bool isPalindrome(string s,int st,int ed){
    while(st<=ed){
        if(s[st++]!=s[ed--]) return false;
    }
    return true;
}
void solve(int index,string &s,vector<vector<string>>&res,vector<strign>path){
    if(index==s.size()){
        res.push_back(path);
        return;
    }
    for(int i=index;i<s.size();i++){
        if(isPalindrome(s,index,i)){
            path.push_back(s.substr(index,i-index+1));
            solve(i+1,s,res,path);
            path.pop_back();
        }
    }
}
int main(){

    string s="aab";
    // cout<<s.substr(0,1);
    vector<vector<string>> res;
    vector<string>path;

    solve(0,s,res,path);

    for(auto v: res)
        for(auto i: v)
             cout<<i<<" ";


    return 0;
}