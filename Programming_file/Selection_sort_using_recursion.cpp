#include<bits/stdc++.h>
using namespace std;

void selection_sort(int *arr,int n){

    if(n == 0 || n==1)
        return;

    int minIndex;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i] < mini){
            mini = arr[i];
            minIndex = i;
        }
    }
    swap(arr[0],arr[minIndex]);

    selection_sort(arr+1,n-1);
}

int main(){

    int arr[5] = {4,3,6,8,1};

    selection_sort(arr,5);

    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    return 0;
}