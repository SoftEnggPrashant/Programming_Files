#include<stdio.h>

int binarysearch(int arr[],int size,int element)
{
    int mid;
   int low = 0;
   int high = size-1;
   while (arr[low] <= arr[high])
   {
       mid = (low + high)/2;
       if(arr[mid] == element)
       {
           return mid;
       }
       if(arr[low]==element)
       {
           return low;
       }
       if(arr[high]==element)
       {
           return high;
       }

       if(arr[mid]<element)
       {
           arr[low] = arr[mid] + 1;
       }
       else
       {
           arr[high] = arr[mid] - 1;
       }

   }

   return -1;
}

int main()
{
    int i=0;
    int arr[]={1,12,21,23,24,34,35,36,37,45,46,47,48,56,57,67,78};
    int size = 20;
    //sizeof(arr)/sizeof(int);
    int a=binarysearch(arr,size,4);
     printf("index no is:%d\n",a);

    return 0;

}
