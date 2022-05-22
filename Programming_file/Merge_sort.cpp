#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int l,int mid,int r){
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
    int i=0;int j=0;int k=l;
    while(i<n1 && j<n2){
        if(a[i]<b[j]){
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }
    while(i<n1){
        arr[k] = a[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = b[j];
        j++;
        k++;
    }

}
void Mergesort(int a[],int l,int r){

 if(l<r){
     int mid = (l+r)/2;
     Mergesort(a,l,mid);
     Mergesort(a,mid+1,r);
     merge(a,l,mid,r);
    }
}
int main(){
    int n = 10;
    int arr[n] = {8,6,4,3,57,2,234,45,34,56};
    Mergesort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}