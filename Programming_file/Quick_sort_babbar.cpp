#include<iostream>
#include<vector>
using namespace std;

int partition(vector<int> &arr,int s,int e){

    int pivot = arr[s];

    int cnt = 0;
    for(int i = s+1;i<=e;i++){
        if(arr[i] <= pivot)
            cnt++;
    }

    int pivotIndex = s+cnt;

    swap(arr[pivotIndex],arr[s]);

    int i = s;
    int j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] <= pivot){
            i++;
        }

        while(arr[j] > pivot){
            j--;
        }

        if(i< pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}

void Quick_sort(vector<int> &arr,int s,int e){

    if(s >= e)
        return;

    int p = partition(arr,s,e);
    Quick_sort(arr,s,p-1);
    Quick_sort(arr,p+1,e);
}

int main(){

    vector<int> arr = {4, 2, 6, 3, 1, 5,8,9,8,9,9,9};

    Quick_sort(arr,0,arr.size()-1);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}