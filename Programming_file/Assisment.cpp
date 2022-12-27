#include<iostream>
using namespace std;

int main(){

    for(int i=1;i<=500;i++){

        int temp = i;

        bool flag = false;
        while(temp > 0){

            int digit = temp%10;

            if(digit == 2 || digit == 3 || digit == 4){
                flag = true;
            }
            else{
                flag = false;
                break;
            }

            temp  = temp / 10;
        }
        if(flag)
            cout<<i<<" ";
    
    }cout<<endl;

    return 0;
}