#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int i=0,currentlen=0,maxlen=0;
    int st=0, maxst=0;
    while(i<n){

        if(arr[i] == ' '|| arr[i]== '\0'){
            if(currentlen>maxlen){
                maxlen = currentlen;
                st=maxst;
            }
            st = i+1;
            currentlen =0;
        }
        else{
            currentlen++;
        }
        if(arr[i]== '\0'){
            break;
        }

        i++;
    }
    cout<<maxlen<<endl;
    for(int i=0;i<maxlen;i++){
        cout<<arr[i+maxst];
    }
     cout<<endl;


    return 0;
}