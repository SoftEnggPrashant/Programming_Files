#include<bits/stdc++.h>
using namespace std;
void print(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
}
void insertion_sort(int *arr,int n,int start){

    print(arr,n);
    if(start == n)
        return;
    
    int temp = arr[start];
    int i = start-1;
    while(arr[i] > temp && i>=0){
        arr[i+1] = arr[i];
        i--;
    }
    arr[i+1] = temp;

    insertion_sort(arr,n,start+1);
    
}

int main(){

    int arr[5] = {4,3,6,8,1};

    insertion_sort(arr,5,1);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}