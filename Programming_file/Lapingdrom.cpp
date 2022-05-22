#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while (T--)
    {
        string s,sr;
        cin>>s;
        string s1="",s2="";
        int l=s.length();
        if(l%2==0){
          for(int i=0;i<l/2;i++){
              s1+=s[i];
          }
          sort(s1.begin(),s1.end());
          for(int i= l/2;i<l;i++){
              s2+=s[i];
          }
          sort(s2.begin(),s2.end());
        }
        else{
            for(int i=0;i<l/2;i++){
                s1+=s[i];
            }
            sort(s1.begin(),s1.end());
            for(int i= l/2+1;i<l;i++){
                s2+=s[i];
            }
            sort(s2.begin(),s2.end());
        }
        if(s1==s2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}