#include<bits/stdc++.h>
using namespace std;

int main(){

    string name = "this is the my laptop";
    int arr[26];
    for(int i=0;i<26;i++)
          arr[i]=0;

    for(int i=0;i<name.size();i++){
        arr[name[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]==1){
            cout<<i+'a'<<" ";
            printf("%c\t",i+'a');
        }
    }
    return 0;
}