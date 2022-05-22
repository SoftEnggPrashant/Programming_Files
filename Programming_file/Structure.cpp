#include<bits/stdc++.h>
using namespace std;
struct person{
    string name;
    string address;
    int age;
};
int main(){
    struct person p;
    cout<<"enter the details of person"<<endl;
    cin>>p.name;
    cin>>p.address;
    cin>>p.age;

    cout<<"the deatails of the person is"<<endl;
    cout<<p.name<<endl;
    cout<<p.address<<endl;
    cout<<p.age<<endl;
    
    return 0;
}