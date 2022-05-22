#include<bits/stdc++.h>
using namespace std;
class Base{
    public:
    virtual void print(){
        cout<<"This is the base class print function"<<endl;
    }
    void show(){
        cout<<"This is the base class show function"<<endl;
    }
};
class Drived :public Base{
    public:
    void print(){
        cout<<"This is the Drived class print function"<<endl;
    }
    void show(){
        cout<<"This is the Drived class show function"<<endl;
    }
};
int main(){
    Base *baseptr;
    Drived d;
    baseptr = &d;
    baseptr->print();
    baseptr->show();

    return 0;
}