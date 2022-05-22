#include<bits/stdc++.h>
using namespace std;
vector<int> Rety(vector<int>&v){
     vector<int>::iterator itr;
     for(auto itr = v.begin();itr!=v.end();itr++){
         if(*itr!=0){
             break;
         }
         v.erase(itr);
     }
     return v;
}
int main(){
    vector<int> a{0,0,0,3,4,9,0,2,4,5,4};
    vector<int>:: iterator it;
    Rety(a);
    for(auto it=a.begin();it!=a.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<a.size()<<endl;

    return 0;
}