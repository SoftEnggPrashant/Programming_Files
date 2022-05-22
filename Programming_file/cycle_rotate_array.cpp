#include<bits/stdc++.h>
using namespace std;

void rotate(int *arr,int n){
     int i=n;
     do
     {
        cout<<arr[i]<<" ";
        i++;
        if(i>n){
            i=0;
        }
     } while (i<n);
     
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 5;
    rotate(arr,n);
    cout<<endl;
    return 0;
}