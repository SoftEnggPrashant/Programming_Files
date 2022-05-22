#include<bits/stdc++.h>
using namespace std;
int main(){

    string s="fdoieheogiduhslgoriepppppp";
    int arr[26];
    for(int i=0;i<26;i++){
         arr[i] = 0;
    }
    char ans;
    int maxlen = -1;
    for(int i=0;i<s.size();i++){
        arr[s[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(maxlen < arr[i]){
            maxlen = arr[i];
            ans = i+'a';
        }
    }
       cout<<maxlen<<endl;
       cout<<ans<<endl;
    return 0;
}