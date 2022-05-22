#include<bits/stdc++.h>
using namespace std;
// const n = 1000;
// int arr[n];

int main(){
    string s = "cbbd";
    string str,tempstr;
    string maxStr="";
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=(s.size())-i;j++){
            str=s.substr(i,j);
            tempstr = str;
            reverse(tempstr.begin(),tempstr.end());
            if(str==tempstr){
                maxStr = max(maxStr,str);
            }
        }
    }
    cout<<maxStr<<endl;
    //cout<<ods(i)<<endl;
    return 0;
}