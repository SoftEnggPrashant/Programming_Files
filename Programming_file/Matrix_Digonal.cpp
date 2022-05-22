#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            arr[i][j] = 0;
        }
    }
    // for(int i=0;i<4;i++){
    //     cin>>arr[i][i];
    // }
    // int a = 0;
    // for(int i=3;i>=0;i--){
    //     cin>>arr[i][a++];
    // }
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if((i==0 && j==0)|| (j==3 && i==3) ||(i==0 && j==3)||(i==3 && j==0)){
                cin>>arr[i][j];
            }
        }
    }
      for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}