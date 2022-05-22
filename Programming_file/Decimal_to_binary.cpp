#include<bits/stdc++.h>
using namespace std;
int main(){

    int n = 94;
    int arr[32];
    int i=0;
    while(n){
        arr[i++]=n%2;
        n/=2;
    }
    for(int j = i-1;j>=0;j--)
        cout<<arr[j]<<" ";
    return 0;
}