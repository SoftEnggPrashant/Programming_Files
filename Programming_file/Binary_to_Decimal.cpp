#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[32];
    int n,i = 0;
    int res =0;
    cin>>n;
    while(n){
        arr[i++] = n%10;
        n/=10;
    }
    for(int j =0;j<i;j++){
        res+=arr[j]*pow(2,j);
    }
    cout<<res<<endl;
    return 0;
}