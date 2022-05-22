#include<iostream>
using namespace std;

int main(){

    int n;
    char first,second,third;
    cin>>n;
    char arr[n][n];
    if(n>=12){
        cout<<"Size out of range"<<endl;
    }
    else{
        cin>>first>>second>>third;
        arr[0][0] = first;
        arr[n-1][n-1] = first;

        arr[0][n-1] = first;
        arr[n-1][0] = first;

        for(int i=1;i<n-1;i++){
            arr[i][0] = second;
            arr[i][n-1] = second;
        }
        for(int j = 1;j<n-1;j++){
            arr[0][j] = second;
            arr[n-1][j] = second;
        }
        for(int i = 1;i<n-1;i++){
            for(int j = 1;j<n-1;j++){
                arr[i][j] = third;
            }
        }
        for(int i = 0;i<n;i++){
            for(int j = 0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}