#include<bits/stdc++.h>
using namespace std;

void mergeArr(int *arr1,int *arr2,int n,int m){
    vector<int> v;
    int i=0;
    int j=0;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            v.push_back(arr1[i]);
            i++;
        }
        else{
            v.push_back(arr2[j]);
            j++;
        }
    }
    while(i<n){
        v.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        v.push_back(arr2[j]);
        j++;
    }
    for(auto i:v){
        cout<<i<<" ";
    }
}
void merge(int *arr1,int *arr2,int n,int m){
      int i=n-1,j=0;
	    while(i>=0 && j<m){
	        if(arr2[j]<arr1[i]){
	            int temp1 = arr1[i];
	            int temp2 = arr2[j];
	            arr1[i] = temp2;
	            arr2[j] = temp1;
	            i--;
	            j++;
	        }
	        i--;
	        j++;
	    }
	     sort(arr1,arr1+n);
	     sort(arr2,arr2+m);
}
int main(){

    int a1[] = {1,3,5,7};
    int a2[] = {0,2,6,8,9};
    int n=4;
    int m=5;
    merge(a1,a2,n,m);
    for(auto i:a1){
        cout<<i<<" ";
    }
    for(auto j:a2){
        cout<<j<<" ";
    }cout<<endl;

    return 0;
}