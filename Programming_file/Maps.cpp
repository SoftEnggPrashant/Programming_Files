#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int,string> m;

    m[1] = "avc"; // insert of map time complexity is O(log(n))
    m[2] = "acd";     // the map insertion time complexity depend on the key value 
    m[3] = "sfsd";
    m[4] = "hkj";
    m[5] = "werw";
    m.insert({6,"weu"}); // In this function time complexity is O(log(n))
    // first type of print the map
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }
    m.erase(2);
    auto it = m.find(3); // the find function O(log(n))
    m.erase(it);  // he's function time complexity O(log(n))
    // second type of print the map 
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}