#include<iostream>
#include<vector>
using namespace std;

// void merge(int *arr,int low,int mid, int high){
//     int temp[100];
//     int t = low;
//     int h = high;
//     int f = low;
//     int s = mid+1;

//     while(f <= mid && s<= h){

//         if(arr[f] < arr[s]){
//             temp[t] = arr[f];
//             f++;
//         }
//         else{
//             temp[t] = arr[s];
//             s++;
//         }
//         t++;
//     }

//     while(f<= mid){
//         temp[t++] = arr[f++];
//     }
//     while(s<=h){
//         temp[t++] = arr[s++];
//     }

//     for(int i=0;i<t;i++){
//         arr[i] = temp[i];
//     }

// }
// void merge_sort(int *arr,int l,int h){
//     int mid;

//     if(l<h){
//         mid = (l+h)/2;

//         merge_sort(arr,l,mid);
//         merge_sort(arr,mid+1,h);
//         merge(arr,l,mid,h);
//     }
// }
void merge(vector < int > &arr,int s,int mid,int e){
    
    int *temp = new int[arr.size()];
    int f_start = s;
    int f_end = mid;
    int s_start = mid+1;
    int s_end = e;
    int t = 0;
    
    while( f_start <= f_end && s_start <= s_end){
        
        if(arr[f_start] < arr[s_start]){
            temp[t++]=arr[f_start++];
        }
        else{
            temp[t++] = arr[s_start++];
        }
    }
    
    while(f_start <= f_end){
        temp[t++]=arr[f_start++];
    }
    while(s_start <= s_end){
        temp[t++] = arr[s_start++];
    }
    
    for(int i=0;i<t;i++){
        arr[i] = temp[i];
    }
}

void merge_sort(vector < int > & arr,int s,int e){
    
    if(s >= e)
        return;
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    merge(arr,s,mid,e);
}
int main(){

    int n;
    cout<<"Enter the array size"<<endl;
    cin>>n;
    vector<int> arr(n);

    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}