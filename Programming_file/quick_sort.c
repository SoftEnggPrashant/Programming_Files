#include<stdio.h>

void display(int A[],int n)
{
   for (int i = 0; i < n; i++)
   {
       printf("%d ",A[i]);
   }
   printf("\n");
}
void quicksort(int A[],int lb,int up)
{
    int loc;
    if (lb<up)
    {
        loc = partition(A,lb,up);
        quicksort(A,lb,loc-1);
        quicksort(A,loc+1,up);

    }
    
}
int partition(int A[],int lb,int up)
{
  int pivot=A[lb];
  int start = lb;
  int end = up;
  while (start<end)
  {
      while (A[start]<pivot&&start<end)
      {
          start++;
      }
      while (A[end]>pivot)
      {
          end--;
      }
      if (start<end)
      {
          int temp;
          temp=A[start];
          A[start]=A[end];
          A[end]=temp;
      }
      if (start>end)
      {
          A[pivot]=A[end];
          A[end]=A[pivot];
      }
      
  }
       return end;
}
int main()
{
    int size=8;
    int arr[size];
   // printf("enter the size of array\n");
   // scanf("%d",&size);
    printf("enter the array element \n");
    for (int  i = 0; i <size; i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    quicksort(arr,0,size-1);
    display(arr,size);
    return 0;
    
}