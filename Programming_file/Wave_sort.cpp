#include<bits/stdc++.h>
using namespace std;
void waveSort(int arr[],int n){
    for(int i=0;i<n;i+=2){
        if(arr[i]> arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1] && i<=n-2){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr[] = { 5, 1, 3, 2, 4};
    waveSort(arr,4);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}