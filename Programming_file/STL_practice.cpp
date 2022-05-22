#include<bits/stdc++.h>
using namespace std;
int mult(int a,int b){
    if(b<=0)
        return 0;
    return a+mult(a,b-1);
}
int divs(int a,int b){
    int q =0;
    while(a>=b){
        a-=b;
        q++;
    }
    return q;
}
int main(){
    // int n;
    // cin>>n;
    // int *arr = new int[n];
    // for(int i=0;i<n;i++)
    //       cin>>arr[i];

    // // for(int i = 0;i<n;i++)
    // //      cout<<arr[i]<<" ";
    // int a = binary_search(arr,arr+n,8);
    // int b = *find(arr,arr+n,8);
    // cout<<a<<endl;

    //**************************************string stl***************************************
    // string s = "sakdfasflas834435.)(*&^(saldfjasdnasdf{}*$#&*&^%^#$";
    // for(int i =0;i<s.size();i++){
    //     if(isalpha(s[i]))
    //     //     cout<<s[i];
    //     // if(isalnum(s[i]))
    //     //     cout<<s[i];
    //     if(!ispunct(s[i]))
    //         cout<<s[i];
    //}
    int a,b,c,d;
    cin>>a>>b;
    c = mult(a,b);
    cout<<c<<endl;
    d = divs(a,b);
    cout<<d<<endl;

    return 0;
}