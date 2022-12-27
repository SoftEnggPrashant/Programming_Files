#include<iostream>
using namespace std;

void insertion_sort(int *arr,int n){

    int j,val;
    for(int i=1;i<n;i++){

        val = arr[i];
        j = i-1;
        while(j>-1 && arr[j]>val){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = val;
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

    insertion_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    return 0;
}