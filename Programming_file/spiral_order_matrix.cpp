#include<bits/stdc++.h>
using namespace std;
int main(){

    int r,c;
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
     int row_start=0,row_end=r-1;
     int colomn_start =0,colomn_end = c-1;
     while(row_start<=row_end && colomn_start <= colomn_end){
           
         for(int col =colomn_start;col<colomn_end;col++){
             cout<<arr[row_start][col]<<" ";
         }
          row_start++;
         for(int row=row_start;row<row_end;row++){
             cout<<arr[row][colomn_end]<<" ";
         }
          colomn_end--;
         for(int col =colomn_end;col>=colomn_start;col--){
             cout<<arr[col][row_end]<<" ";
         }
         row_end--;
         for(int row = row_end;row>=row_start;row--){
             cout<<arr[row][colomn_start]<<" ";
         }
          colomn_start++;
     }

    return 0;
}