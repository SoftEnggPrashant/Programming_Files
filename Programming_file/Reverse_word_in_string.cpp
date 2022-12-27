#include<iostream>
using namespace std;

void Reverse(string &st ,int s,int e){

    while(s<=e){
        swap(st[s++],st[e--]);
    }
}

int main(){

    string s;
    cout<<"Enter the string "<<endl;
    getline(cin,s);

    int j = 0;

    for(int i=0;i<=s.size();i++){
        if(s[i] == ' '){
            Reverse(s,j,i-1);
            j = i+1;
        }
        else if(s[i] == '\0'){
            Reverse(s,j,i-1);
        }
    }

    cout<<"the string is : "<<s<<endl;
    return 0;
}