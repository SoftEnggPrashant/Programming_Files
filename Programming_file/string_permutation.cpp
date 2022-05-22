#include<bits/stdc++.h>
using namespace std;

void permutation(string str,int idx){

    if(idx>=str.length()){
        cout<<str<<endl;
        return;
    }

    for(int i=idx;i<str.length();i++){
        swap(str[idx],str[i]);
        permutation(str,idx+1);
        swap(str[idx],str[i]);
    }
}
int main(){
    string s ="ABC";
    permutation(s,0);

    return 0;
}