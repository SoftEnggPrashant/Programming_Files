#include<iostream>
#include<vector>
using namespace std;

void Zero_one_sort(vector<int> &arr){

    int n = arr.size();
    int i=0;
    int j = n-1;

    while(i<j){
        if(arr[i]==0 && i < j){
            i++;
        }

        if(arr[j]==1 && i< j){
            j--;
        }

        if((arr[i]== 1 && arr[j] == 0) && i<j){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
       
    }
}

int main(){

    vector<int> v = {1,0,1,0,0,1,0,0,1,0,1,0,1,1,1,0,0};
    // int n,num;
    // cout<<"Enter the size of array "<<endl;
    // cin>>n;

    // cout<<"Enter the array element "<<endl;

    // for(int i=0;i<n;i++){
    //     cin>>num;
    //     v.push_back(num);
    // }

    Zero_one_sort(v);

    cout<<"the array element : "<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
    return 0;
}
