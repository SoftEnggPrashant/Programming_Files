#include<bits/stdc++.h>
using namespace std;

int main(){
    //int a,b;
    //cin>>a>>b;
   // cout<<a+b<<endl;
   int arr[] = {1,2,3,4,5,6};
   string str="";
   list<int> l;
   string s = "1235";
   string s1 = "4567";
   reverse(s.begin(),s.end());
   reverse(s1.begin(),s1.end());
   int a = stoi(s);
   int b = stoi(s1);
   int c = a+b;
   cout<<b<<endl;
   cout<<a<<endl;
   cout<<c<<endl;
   while(c>0){
       int d = c%10;
       l.push_back(d);
       c= c/10;
   }
   list<int>:: iterator it;
   for(auto it=l.begin();it!=l.end();it++){
       cout<<*it<<" ";
   }
   for(int i=0;i<5;i++){
       str+=to_string(arr[i]);
   }
   cout<<endl;
   int con = stoi(str);
   cout<<con<<endl;

    return 0;
}