#include<iostream>
using namespace std;

int arraySum(int *arr,int size){

    int ans = 0;
    for(int i=0;i<size;i++){
        ans+=arr[i];
    }
    return ans;
}

int main(){

    // int arr[10];
    // for(int i=0;i<10;i++){
    //     arr[i] = i;
    // }

    // for(int i=0;i<=12;i++){
    //     cout<<i[arr]<<" ";
    // }

    int size;
    cout<<"Enter the size of array"<<endl;
    cin>>size;

    // Dynamic memory allocation of array is the good practice
    int *arr = new int[size];

    cout<<"Enter the elements of array"<<endl;

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"the sum of array is : "<<arraySum(arr,size)<<endl;

    return 0;
}