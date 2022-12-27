#include<iostream>
using namespace std;

bool linear_search(int *arr,int size,int key){

    if(size == 0){
        return false;
    }

    if(arr[0] == key){
        return true;
    }
    else{
        return linear_search(arr+1,size-1,key);
    }
}

int Binary_search(int *arr,int s,int e,int key){

    if(s > e)
        return -1;
    
    int mid = s+(e-s)/2;

    if(arr[mid] == key)
        return mid;

    if(arr[mid] < key){
        return Binary_search(arr,mid+1,e,key);
    }
    else{
        return Binary_search(arr,s,mid-1,key);
    }
}

int main(){

    int arr[7] = {2,3,7,5,9,11,34};
    int size = 7;
    int key = 12;

    bool ans = linear_search(arr,size,key);
    cout<<ans<<endl;
    cout<<Binary_search(arr,0,size-1,key)<<endl;


    return 0;
}