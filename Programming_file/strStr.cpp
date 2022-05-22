#include<bits/stdc++.h>
using namespace std;
 int strStr(string haystack, string needle) {
        if(haystack=="" && needle == "") return 0;
         if(haystack=="") return -1;
         if(needle=="") return 0;
        if(haystack.size()<needle.size()) return -1;
        string ans;
       for(int i=0;i<haystack.size();i++){
           ans="";
           for(int j=i+1;j<haystack.size();j++){
               ans+=haystack[j];
               if(ans==needle) return i+1;
           }
       }
        return -1;
    }
int main(){

    string haystack = "aaa";
    string needle = "a";

    cout<<strStr(haystack,needle)<<endl;

    return 0;
}