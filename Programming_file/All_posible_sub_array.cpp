#include<iostream>
using namespace std;

int main(){

    int a[] = {1,2,3,4,5,6};
    for(int i=0;i<6;i++){
        for(int j=i;j<6;j++){
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}