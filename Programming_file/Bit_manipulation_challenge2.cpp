#include<bits/stdc++.h>
using namespace std;
int setbits(int n,int pos){
    return ((n&(1<<pos))!=0);
}
void unique(int arr[],int n){

    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];
    }
    int tempxor = xorsum;
    int setbit =0;
    int pos =0;
    while(setbit!=1){
        setbit = xorsum & 1;
        pos++;
        xorsum = xorsum >>1;
    }
    int newxor =0;
    for(int i=0;i<n;i++){
        if(setbits(arr[i],pos-1)){
            newxor = newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^tempxor)<<endl;
}
int main(){
    int arr[] = {1,2,3,1,2,3,8,9};
    unique(arr,8);
    return 0;
}