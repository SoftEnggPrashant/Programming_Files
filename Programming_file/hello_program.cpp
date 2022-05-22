#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // int a = 5;
    // cout<<a<<endl;
    // char c = 97;
    // cout<<c<<endl;
   // string s = "";
   vector<string> v;
   string s = "abcdef";
   for(int i=0;i<s.size()/2;i++){
       for(int j=s.size()/2;j<s.size();j++){
           char s1 = s[i];
           char s2 = s[j];
           string sv = "";
           sv+=s1;
           sv+=s2;
           v.push_back(sv);
       }
   }
   for(auto i : v)
         cout<<i<<" ";

         vector<string> strs;
         int a = 34;
         strs.push_back("a");
         cout<<strs[0]<<endl;
    return 0;
}
