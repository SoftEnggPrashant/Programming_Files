#include<bits/stdc++.h>
using namespace std;
void subsequnce(string s,string ans = ""){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);
    subsequnce(ros,ans);
    subsequnce(ros,ans+ch);
}
int main(){
    subsequnce("ABC","");
    return 0;
}