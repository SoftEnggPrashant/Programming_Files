#include <iostream>
using namespace std;
 void display(long int arr[],long int t){
	for(long int k=0;k<t;k++){
	    cout<<arr[k]<<endl;
	}
   }
 void sort(long int arr[],long int t){
    int temp,s;
	for(long int i=0;i<t;i++){
        s=i;
	    int j=i+1;
	    while(j<t){
	        if(arr[j]<arr[s]){
	            s=j;
	        }
	        j++;
	    }
	    temp=arr[i];
	    arr[i]=arr[s];
	    arr[s]=temp;
	  }
    }

int main() {
	// your code goes here
	 long int t;
	cin>>t;
	 long int arr[t];
     long int n;
	for (long int i=0;i<t;i++) {
	    cin>>arr[i];
	}
    sort(arr,t);
    display(arr,t);
	return 0;
}
