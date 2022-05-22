#include<bits/stdc++.h>
using namespace std;

bool subArray(int *arr,int n){

    int st=0,ed=0;
    int sum;
    while(st<n){
        for(int i=st;i<ed;i++){
            sum+=arr[i];
        }
        if(sum==0){
            return true;
        }
        if(ed<n){
            ed++;
        }
        else{
            st++;
            ed=st;
        }
    }
    return false;
}
int main(){

    int arr[] ={1,2,3,4,5};
    cout<<subArray(arr,5)<<endl;

    return 0;
}