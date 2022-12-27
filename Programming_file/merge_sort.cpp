#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr,int s,int e){


    int mid = (s+e)/2;

    int len1 = mid - s + 1;
    int len2 = e-mid;
    

    int *first = new int[len1];
    int *second = new int[len2];


    for(int i=0;i<len1;i++){
        first[i] = arr[s+i];
    }

    for(int i=0;i<len2;i++){
        second[i] = arr[mid+1+i];
    }

    int i = 0;
    int j = 0;
    int t = s;

    while(i < len1 && j < len2){

        if(first[i] < second[j]){
            arr[t++] = first[i++];
        }
        else{
            arr[t++] = second[j++];
        }
    }

    while(i < len1){
         arr[t++] = first[i++];
    }

    while(j < len2){
        arr[t++] = second[j++];
    }

    delete []first;
    delete []second;
}

void merge_sort(vector<int> &arr,int s,int e){

    if( s >= e)
        return;
    
    int mid = (s+e)/2;

    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,e);
}

int main(){

    int n = 6;
    // cin>>n;
    vector<int> arr = {4, 2, 6, 3, 1, 5};

    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}