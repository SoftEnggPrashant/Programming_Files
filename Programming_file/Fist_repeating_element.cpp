#include<bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int d = 1e6+2;
    int idx[d];
    for(int i=0;i<d;i++){
        idx[i]= -1;
    }
    int mindx = INT_MAX;
    for(int i=0;i<n;i++){
        if(idx[a[i]] != -1){
        mindx = min(mindx,idx[a[i]]);
        }
        else{
            idx[a[i]]= i;
        }
    }
    if(mindx == INT_MAX){
        cout<< " -1"<<endl;
    }
    else{
         cout<<mindx+1<<endl;
    }

    return 0;
}