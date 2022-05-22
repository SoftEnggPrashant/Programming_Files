#include<bits/stdc++.h>
using namespace std;
void reverseArray(int* arr,int n){
    int a;
    if(n%2==0){
        a=n/2;
    }
    else{
        a=n/2+1;
    }
    for(int i=0;i<a;i++){
        swap(arr[i],arr[n-i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    reverseArray(arr,15);

    return 0;
}