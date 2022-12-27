#include<bits/stdc++.h>
using namespace std;

void wavePrint(int arr[][4],int r, int c){

    for( int col = 0; col < c ;col++){

        if(col%2!=0){
            for(int row = r-1; row >= 0; row--){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
        else{
            for(int row = 0; row < r; row++){
                cout<<arr[row][col]<<" ";
            }
            cout<<endl;
        }
    }
}

int main(){

    int arr[3][4];

    cout<<"Enter the array elements "<<endl;
    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cin>>arr[row][col];
        }
    }

    for(int row = 0; row < 3; row++){
        for(int col = 0; col < 4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

    wavePrint(arr,3,4);
    return 0;
}