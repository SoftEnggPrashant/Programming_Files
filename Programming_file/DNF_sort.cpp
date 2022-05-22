#include<bits/stdc++.h>
using namespace std;
void swapf(int arr[],int i,int j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
void DNF(int arr[],int n){
    
    int mid = 0;
    int low = 0;
    int higth = n-1;
    while(mid <= higth){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[higth]);
            higth--;
        }
    }
}
int main(){
    int arr[] = {0,1,0,2,1,0,2,1,2};
    DNF(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}