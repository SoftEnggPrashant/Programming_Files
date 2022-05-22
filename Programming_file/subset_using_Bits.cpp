#include<bits/stdc++.h>
using namespace std;
void subSet(int arr[],int n){
    int a = pow(2,n);
    for(int i=0;i<=a;i++){
        for(int j=0;j<n;j++){
            if(i & (1<<j)){
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }
}
int main(){
    int arr[3] ={1,2,3};
    subSet(arr,3);
    //cout<<(5^0)<<endl;
    return 0;
}