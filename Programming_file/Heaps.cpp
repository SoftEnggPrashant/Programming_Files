#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int,vector<int>> he;
    
    he.push(3);
    he.push(7);
    he.push(2);
    he.push(1);
    he.push(4);

    cout<<he.top()<< endl;
    he.pop();
    cout<<he.top()<<endl;

    priority_queue<int,vector<int>,greater<int>> mh;

    mh.push(3);
    mh.push(7);
    mh.push(2);
    mh.push(1);
    mh.push(4);

    cout<<mh.top()<<endl;
    mh.pop();
    cout<<mh.top()<<endl;

    return 0;
}