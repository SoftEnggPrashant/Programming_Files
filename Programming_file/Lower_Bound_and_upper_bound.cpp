#include<iostream>
using namespace std;
int lower_bound(int arr[],int n,int ele){
    int low =0;
    int high = n-1;
    int mid;
    while(low < high){
        mid = (low+high)/2;
        if(arr[mid]< ele) low = mid+1;
        else high = mid;
    }
    if(arr[low]==ele) return arr[low];
    else return arr[high];
}
int upper_bound(int arr[],int n,int ele){
    int low =0;
    int high = n-1;
    int mid;
    while(low < high){
        mid = (low+high)/2;
        if(arr[mid]<= ele) low = mid+1;
        else high = mid;
    }
    if(arr[low]>=ele) return arr[low];
    else return arr[high];
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cin>>ele;
    cout<< lower_bound(arr,n,ele)<<endl;
    cout<< upper_bound(arr,n,ele)<<endl;
    return 0;
}