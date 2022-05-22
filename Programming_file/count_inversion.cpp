#include<bits/stdc++.h>
using namespace std;
long long merge(int arr[],int mid,int l,int r){
    long long inve =0;
    int n1 = mid-l+1;
    int n2 = r-mid;
    int a[n1];
    int b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i=0;int j=0; int k=l;
    while(i<n1 && j<n2){
        if(a[i]<=b[j]){
            arr[k] = a[i];
            i++;k++;
        }
        else{
            arr[k] = b[j];
            inve += n1-i;
            j++;k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++;k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;k++;
    }
    return inve;
}
long long mergeSort(int arr[],int l,int r){
    int inve =0;
    if(l<r){
        int mid = (l+r)/2;
        inve += mergeSort(arr,l,mid);
        inve += mergeSort(arr,mid+1,r);
        inve += merge(arr,mid,l,r);
    }
    return inve;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(arr,0,n-1)<<" ";
    cout<<endl;
    return 0;
}