#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    char a[n];
    cin>>a;
    bool check = true;
    for(int i=0;i<n;i++){
        if(a[i]!=a[n-1-i]){
              check = false;
        }
    }
    if(check){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }



    return 0;
}