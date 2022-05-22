#include<bits/stdc++.h>
using namespace std;

string solve(string s){
        vector<string> v;
        map<int,string> ans;
        string str="",an,fans;
        for(int i=0;i<s.length();i++){
            if(s[i]!=' '){
                str+=s[i];
            }
            else{
                v.push_back(str);
                str="";
            }
        }
        v.push_back(str);
        for(int i=0;i<v.size();i++){
            string t = v[i];
            int a = t[t.size()-1]-'0';
            ans.insert(make_pair(a,t));
        }
        for(auto itr=ans.begin();itr!=ans.end();itr++){
            an+=itr->second+' ';
        }
    an.pop_back();
    for(int i=0;i<an.size();i++){
        if(isalpha(an[i])||an[i]==' '){
            fans+=an[i];
        }
    }
    return fans;
}
int main(){

    string s = "is2 sentence4 This1 a3";
    string st = solve(s);
    cout<<st;

    return 0;
}