#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[2][3][3];
    for(int k=0;k<2;k++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin>>arr[k][i][j];
            }
        }
    }
     for(int k=0;k<2;k++){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<arr[k][i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}