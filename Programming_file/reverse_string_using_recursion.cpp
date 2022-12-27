#include<iostream>
using namespace std;

void reverse(string &str,int i,int j){

    if(i>j)
        return;

    swap(str[i],str[j]);
    reverse(str,i+1,j-1);
}

bool check_palindrome(string str,int i,int j){

    if(i > j)
        return true;
    
    if(str[i] != str[j])
        return false;
    else{
        return check_palindrome(str,i+1,j-1);
    }
}

int main(){

    string str = "abbbbac";
    reverse(str,0,str.size()-1);
    cout<<str<<endl;

    if(check_palindrome(str,0,str.size()-1))
        cout<<"yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}