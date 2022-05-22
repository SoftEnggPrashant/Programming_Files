#include<bits/stdc++.h>
using namespace std;
double grosSalary(int salary){
    if(salary<1500){
        double h = (salary*10)/100;
        double d = (salary*90)/100;
        double grossa = salary+h+d;
        return grossa;
    }

    if(salary>=1500){
        double h = 500;
        double d = (salary*98)/100;
        double grossb = salary+h+d;
        return grossb;
    }
    return 0;
}
int main(){
    int T;
    cin>>T;
    while(T--){
        int salary;
        cin>>salary;
        double a = grosSalary(salary);
        cout<<fixed<<setprecision(2)<<a<<endl;
    }
    return 0;
}