#include<iostream>
using namespace std;

int main(){

    int num;

    // switch(num)
    // {
    //     case 1:
    //     cout<<"first Number "<<endl;
    //     break;

    //     case 2:
    //     cout<<"second Number"<<endl;
    //     break;

    //     case 3:
    //     cout<<"third Number"<<endl;
    //     break;

    //     case 4:

    //     switch(num){
    //         case 4:
    //         cout<<"the value of num "<<num<<endl;
    //         break;
    //     }

    //     cout<<"fourth Number"<<endl;
    //     break;

    //     default:
    //     cout<<"invalid input"<<endl;
    //     break;
    // }
    cin>>num;
    int ans = 0;
    while(num != 0){
        if(num>=100){
            ans = num/100;
            num = num%100;
            cout<<"100 rupee :"<<ans<<endl;
        }
        else if(num >= 50){
            ans = num/50;
            num = num%50;
            cout<<"50 ruppe : "<<ans<<endl;
        }
        else if(num>=20){
            ans = num/20;
            num = num%20;
            cout<<"20 ruppe : "<<ans<<endl;
        }
        else if(num>=1){
            ans = num/1;
            num = num%1;
            cout<<"1 ruppe : "<<ans<<endl;
        }
    }
    return 0;
}