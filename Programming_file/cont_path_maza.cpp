#include<bits/stdc++.h>
using namespace std;
int mazapath(int n,int i,int j){
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n||j>=n){
        return 0;
    }
    return mazapath(n,i+1,j)+mazapath(n,i,j+1);
}
int main(){

    cout<<mazapath(3,0,0)<<endl;
    return 0;
}