#include<bits/stdc++.h>
using namespace std;

int duplicate(int *arr,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
            break;
        }
    }
    return 0;
}
int repetedElement(int *arr,int n){
    int *a = new int[n];
    a[n]=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            a[arr[i]]++;
        }
    }
    sort(a,a+n);
    return a[n-1];
}

int main(){
    int a[]={1,2,3,4,5,5,5,6,7,8,9};
    int n=11;
    // cout<<duplicate(a,n)<<endl;
    cout<<repetedElement(a,n)<<endl;

    return 0;
}