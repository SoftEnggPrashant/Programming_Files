#include<bits/stdc++.h>
using namespace std;
int main(){

    // string s= "2304958734597890";
    // sort(s.begin(),s.end(),greater<int>());
    // cout<<s<<endl;
    string s = "aaaassdssssaaa";
    int n = s.size();

    char a[100];
    a[0] = s[0];
    int cont = 1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]){
            a[cont] = s[i],cont++;
        }
    }
     cout<<a<<endl;
    return 0;
}