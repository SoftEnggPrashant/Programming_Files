#include<bits/stdc++.h>
using namespace std;


void printSum(int arr[][4],int r,int c){

    for(int row = 0;row < r; row++){
        int sum = 0;
        for(int col = 0; col < c; col++){
            sum+= arr[row][col];
        }
        cout<<sum<<endl;
    }
}

void printLargetRowSum(int arr[][4],int r,int c){

    int maxi = INT_MIN;
    int ansRow = -1;

    for(int row = 0;row < r; row++){
        int sum = 0;
        for(int col = 0; col < c; col++){
            sum+= arr[row][col];
        }
       if(sum > maxi){
           maxi = sum;
           ansRow = row;
       }
    }

    cout<<"maximum row sum is :"<<maxi<<endl;
    cout<<"maximum row is :"<<ansRow+1<<endl;

}

int main(){

    int arr[3][4];

    // cout<<"Enter the row bise elements "<<endl;
    // for(int row =0;row < 3;row++){
    //     for(int col = 0; col < 4;col++){
    //         cin>> arr[row][col];
    //     }
    // }


    cout<<"Enter the element column wise "<<endl;

    for(int col = 0; col < 4; col++){
        for(int row = 0; row < 3; row++){
            cin>>arr[row][col];
        }
    }

    cout<< "the matrix is : "<<endl;
    
    for(int row =0;row < 3;row++){
        for(int col = 0; col < 4;col++){
            cout<< arr[row][col]<<" ";
        }
        cout<<endl;
    }

    printSum(arr,3,4);
    printLargetRowSum(arr,3,4);

    return 0;
}