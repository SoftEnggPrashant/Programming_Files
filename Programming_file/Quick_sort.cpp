#include<iostream>
using namespace std;

int partition(int *arr,int low,int high){

    int pivot = arr[low];
    int l = low;
    int h = high;

    while(l < h){

        while(arr[l] < pivot){
            l++;
        }

        while(arr[h] > pivot){
            h--;
        }

        if(l < h){
            swap(arr[l],arr[h]);
        }
    }
    
    return h;

}
void quick_sort(int *arr,int low,int high){

    if(low<high){

        int pi = partition(arr,low,high);
        quick_sort(arr,low,pi-1);
        quick_sort(arr,pi+1,high);
    }
}
int main(){

    int arr[100];
    int n;
    cout<<"Enter the size of array "<<endl;
    cin>>n;

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    quick_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}