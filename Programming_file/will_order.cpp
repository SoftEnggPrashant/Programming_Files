#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s = to_string(n);
    string s1,s2;
    for(int i=0;i<4;i++){
        if(i<=1) s1+=s[i];
        else s2+=s[i];
    }
    cout<<s1<<endl;
    cout<<s2<<endl;
    if(stoi(s1)-stoi(s2)==1 || stoi(s1)-stoi(s2)==-1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
    return 0;
}