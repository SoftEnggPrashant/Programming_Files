#include<stdio.h>
void display(int* A,int size)
{
    for (int  i = 0; i <= size-1; i++)
    {
      printf("%d ",A[i]);
    }
    printf("\n");
}
void booblesort(int* A,int size){
    int temp;
    int isSort=0;
    for (int  i = 0; i < size-1; i++)
    {
        printf("no of pass:%d\n",i+1);
        isSort=1;
        for (int j = 0; j <= size-1-i; j++)
        {
            if (A[j]>A[j+1])
            {
              temp=A[j];
              A[j]=A[j+1];
              A[j+1]=temp;
              isSort=0;   
            }
        }
        if(isSort){
            return;
       }
    }
    
}
int main()
{
    //int arr[]={23,4,45,6,2,56,12};
    int arr[]={1,2,3,4,5,6,7};
    int size=7;
    display(arr,size);
    booblesort(arr,size);
    display(arr,size);
    return 0;
}