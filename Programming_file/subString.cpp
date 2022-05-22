#include<bits/stdc++.h>
using namespace std;
int main(){
    bool check;
    string s1,s2;
    cin>>s1;
    cin>>s2;

    for(int i=0;i<s1.size();i++){
        check = true;
        for(int j=0;j<s2.size();j++){
            if(s1[i+j]!=s2[j]){
                check = false;
                break;
            }
        }
        if(check)
        break;
    }
    if(check)cout<<"Yes"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}