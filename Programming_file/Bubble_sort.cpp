#include<iostream>
using namespace std;

void Bubble_sort(int *arr,int n){

    for(int i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}

int main(){

    int arr[100];
    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    cout<<"Enter the element"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}