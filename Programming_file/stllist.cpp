#include<iostream>
#include<list>

using namespace std;

void display(list<int> &y)
{

    list<int>::iterator it;
    for(it=y.begin();it!=y.end();it++)
    {

        cout<< *it <<" ";
    }
    cout<<endl;
}

int main()
{

    list<int>list1;
    list<int>list2(5);
    int a;
    cout<<"enter the no";
    for(int i=0;i<=7;i++)
    {

        cin>>a;
        list1.push_back(a);
    }
  //  list1.push_back(2);
  //  list1.push_back(3);
  //  list1.push_back(43);
  //  list1.push_back(51);
  //  list1.push_back(64);
  //  list1.push_back(7);
//     display(list1);

    //remove the element:
  //  list1.remove(51);
    //list<int>::iterator itr;
    //itr =list1.begin();
   // cout<<*itr;
     display(list1);
    int b;
    cout<<"enter the value";
    list<int>::iterator itr;
    for(itr=list2.begin();itr!=list2.end();itr++)
    {
        cin>>b;
        *itr=b;

    }
  //   *itr=32;
  //   itr++;

  //   *itr=23;
  //   itr++;

  //   *itr=67;
  //   itr++;

  //   *itr=3;
  //   itr++;

  //   *itr=4;
  //   itr++;

     display(list2);
     list1.sort();
     list2.sort();
     display(list1);
     display(list2);

     //merging the list

     list1.merge(list2);
     display(list1);

    return 0;
}
