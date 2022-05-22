#include<bits/stdc++.h>
using namespace std;
int main(){

    int n,m,target;
    cin>>n>>m;
    cin>>target;
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }
    bool found = false;
    int r=0,c=n-1;
    while(r<n && c>=0){

        if(mat[r][c]==target){
            found = true;
        }   
        mat[r][c] > target ? c--:r++;
    }
    if(found){
        cout<<"no is found "<<endl;
    }
    else{
        cout<<"no is not found "<<endl;
    }


    return 0;
}