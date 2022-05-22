#include<bits/stdc++.h>
using namespace std;
vector <int> incrementVector(vector <int> &a){
    vector <int>::iterator it;
    int n=a.size();
    if(a[0]==0 && n==1){
        a[0]++;
    }
    else{
    a[n-1] += 1;
    int carry  = a[n-1]/10;
    a[n-1] = a[n-1]%10;
    for(int i= n-2;i>=0;i--){
        if(carry==1){
           a[i] += 1;
           carry = a[i]/10;
           a[i] = a[i]%10;
        }
    }
    if(carry == 1){
        a.insert(a.begin(),1);
      }
    }
    if(a[0]==0){
    reverse(a.begin(),a.end());
    for(int i =n;i>=0;i--){
        if(a[i]==0){
        a.pop_back();
        }
    }
    reverse(a.begin(),a.end());}
    return a;
}
int main(){
    vector<int>v{0,9, 9, 9, 9, 9 };
    vector<int>::iterator itr;
    incrementVector(v);
    for(auto itr=v.begin();itr!=v.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    return 0;
}