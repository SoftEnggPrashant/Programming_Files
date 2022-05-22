#include<stdio.h>

int search(int arr[],int size,int element)
{

     for(int i=0;i<size;i++)
    {
     if(element == arr[i])
     {
         return i;
      }

    }
    return -1;

}
int main()
{
    int n;
    printf("your element:\n");
    scanf("%d",&n);
    int arr[] = {23,24,35,46,56,57,67};
    int size=sizeof(arr)/sizeof(int);
    int z = search(arr,size,n);
    printf("Index no is:%d\n",z);

   return 0;
  }
