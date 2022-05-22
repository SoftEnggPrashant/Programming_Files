#include<iostream>
using namespace std;
template<class T>
class vector
{
    public:
    T *arr;
    int size;
    vector(int m)
    {
        size=m;
        arr= new T[size];
    }
    T dotproduct(vector &v)
    {
        T d=0;
         for(int i=1;i<=size;i++)
         {
          d+=this->arr[i]*v.arr[i];
         }
         return d;
    }
};

  int main()
  {
      vector<float> v1(3);
      v1.arr[0]=3.10;
      v1.arr[1]=4.00;
      v1.arr[2]=7.00;
      vector<float>v2(3);
      v2.arr[0]=5.00;
      v2.arr[1]=5.10;
      v2.arr[2]=4.00;
      float a=v1.dotproduct(v2);
      cout<<a<<endl;
      return 0;
  }
