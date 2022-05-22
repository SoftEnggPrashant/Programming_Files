#include<bits/stdc++.h>
using namespace std;

int LSStr(string s){

    vector<int> v(256,-1);
    int maxLen =0,start=-1;
    for(int i=0;i<s.size();i++){
        if(v[s[i]]>start) start = v[s[i]];
        v[s[i]] = i;
        maxLen = max(maxLen,i-start);
    }
    return maxLen;
}
int main(){

    string s = "pwwkew";
    cout<<LSStr(s)<<endl;
    return 0;
}