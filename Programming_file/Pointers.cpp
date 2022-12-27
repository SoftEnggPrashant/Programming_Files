#include<iostream>
using namespace std;

void update(int &n){
    n++;
}

int main(){

    /*
    float f = 10.5;
    float p = 2.5;
    float *ptr = &f;

    (*ptr)++;
    cout<<*ptr<<endl;
    *ptr = p;
    cout<<*ptr << f<< p<<endl;
    */
   
   int num = 10;
   update(num);

   cout<<num<<endl;


    return 0;
}