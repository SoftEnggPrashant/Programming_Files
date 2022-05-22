#include<bits/stdc++.h>
using namespace std;
class person{
    public:
    string name;
    string address;
    int age;
};
int main(){
    person p[3];
    for(int i = 0;i<3;i++){
        cin>>p[i].name>>p[i].address>>p[i].age;
    }
    cout<<"the person details are show blow"<<endl;
    for(int i=0;i<3;i++){
        cout<<p[i].name<<" "<<p[i].address<<" "<<p[i].age<<endl;
    }

    return 0;

}