#include<bits/stdc++.h>
using namespace std;
void countSort(int arr[],int n){

    int m = arr[0];
    for(int i=0;i<n;i++){
        m = max(m,arr[i]);
    }
    vector<int>count(m+1,0);
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=1;i<count.size();i++){
        count[i] += count[i-1];
    }
    int output[n];
    for(int i=n-1;i>=0;i--){
        output[--count[arr[i]]] = arr[i];
    }
    for(int i=0;i<n;i++){
        arr[i] = output[i];
    }
}
int main(){
    int arr[] = {4,3,2,4,3,1,2,1,6,5,6,7,8};
    countSort(arr,13);
    for(int i=0;i<13;i++){
        cout<<arr[i]<<" "; 
    }   cout<<endl;
    return 0;
}