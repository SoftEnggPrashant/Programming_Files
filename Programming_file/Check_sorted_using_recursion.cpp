#include<bits/stdc++.h>
using namespace std;

bool isSorted(int *arr,int size){

    if(size == 1 || size == 0)
        return true;
    
    if(arr[0] > arr[1])
        return false;
    else{
        return isSorted(arr+1,size-1);
    }
}

int main(){

    int arr[50];
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(isSorted(arr,n))
        cout<<"array is sorted"<<endl;
    else
        cout<<"array is not sorted"<<endl;

    return 0;
}