#include<bits/stdc++.h>
using namespace std;

void solve(string str,int index){
    if(index >= str.size()){
        cout<<str<<endl;
        return;
    }

    for(int i=index;i<str.size();i++){
        swap(str[i],str[index]);
        solve(str,index+1);
        swap(str[i],str[index]);
    }
}

int main(){

    string str;
    cin>>str;

    int index = 0;
    solve(str,index);


    return 0;
}