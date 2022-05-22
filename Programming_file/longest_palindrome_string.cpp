#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans=""){
    
    if(s.length()==0){
         cout<<ans<<endl;
        return;
    }
    char c = s[0];
    string ros = s.substr(1);

    subseq(ros,ans+c);
    subseq(ros,ans);

}

void solve(string s){
    int n =s.size();
    string str="";
    int st=0,ed=0;
    while(st<n){
        str+=s[ed];
        if(ed<n) ed++;
        else{
            cout<<str<<endl;
            st++;
            ed=st;
        }
    }
}
int main(){
    
    string a ="abc";
    solve(a);
    return 0;
}