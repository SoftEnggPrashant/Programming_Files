#include<bits/stdc++.h>
using namespace std;
int firstoccu(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return firstoccu(arr,n,i+1,key);
}
int lastoccu(int arr[],int n,int i,int key){
       if(n==i){
           return -1;
       }
       int restArr = lastoccu(arr,n,i+1,key);
       if(restArr != -1){
           return restArr;
       }
       if(arr[i]==key){
           return i;
       }
       return -1;
}
int main(){
    int arr[] = {1,4,2,3,4,6,7,5,2,5,4};
    cout<<firstoccu(arr,11,0,2)<<endl;
    cout<<lastoccu(arr,11,0,2)<<endl;
    return 0;
}