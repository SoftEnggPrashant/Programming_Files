#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

void display(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        /* code */
        cout << arr[i] <<" ";
    }
    cout << endl;
}
int main()
{
    int arr1[] = {24, 3, 1, 45, 23, 5};
    int arr2[] = {5, 34, 2, 22, 67, 56};
    cout << "before sort array elememt \n";
    display(arr1);
    sort(arr1, arr1 + 6,greater<int>());
    cout << "after sorting array element\n";
    display(arr1);
    cout << "before sort array2 elememt \n";
    display(arr2);
    sort(arr2, arr2 + 6,greater<int>());
    cout << "after sorting array2 element\n";
    display(arr2);
    int z[12];
    cout<<"merging the array is \n";
    merge(arr1,arr1+6,arr2,arr2+6,z);
    for (int i = 0; i < 12; i++)
    {
        /* code */
        cout<<z[i]<<" ";
    }
    
    return 0;
}