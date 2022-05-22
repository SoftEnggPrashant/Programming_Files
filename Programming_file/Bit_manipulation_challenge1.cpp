#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int s){
    int un =0;
    for(int i=0;i<s;i++){
        un = un^arr[i];
    }
    return un;
}
int main(){
    int array[] = {1,2,3,8,1,2,3};
    cout<<unique(array,7)<<endl;

    return 0;
}
