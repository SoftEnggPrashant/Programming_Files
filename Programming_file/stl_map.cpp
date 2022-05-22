#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    map<string,int>mymap;
    mymap["rohan"]=10000;
    mymap["mohan"]=15000;
    mymap["ronu"]=1000;
    
    mymap.insert(pair<string,int>("yogesh",12000));
    mymap.insert({"sanjeev",11000});
    map<string,int>::iterator itr=mymap.begin();
    for ( itr=mymap.begin(); itr!=mymap.end(); itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    
    return 0;

}