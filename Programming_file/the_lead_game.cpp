#include<iostream>
using namespace std;
int main()
{
    int round;
    cin>>round;
    int sum1=0,sum2=0;
    int max=0;
    int p=0;
    while(round--)
    {
        int s1,s2;
        cin>>s1>>s2;
        sum1+=s1;
        sum2+=s2;
        if(sum1>sum2){
        if(max<(s1-s2)){
            p=1;
            max=(s1-s2);
          }
        }
        else
        {
            if(max<(s2-s1)){
                p=2;
                max=(s1-s2);
            }
        }
    }
      cout<<p<<" "<<max<<endl;
    return 0;
}