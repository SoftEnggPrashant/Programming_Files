#include<stdio.h>

void display(int A[],int n)
{
    for (int i = 0; i < n; i++)
    {
        /* code */
        printf("%d ",A[i]);
    }
    printf("\n");
}
void selection(int* A,int n)
{
    int temp,min;
    for (int i = 0; i < n-1; i++)
    {
        min= i;
        for (int j = i+1; j < n; j++)
        {
            if (A[j]<A[min])
            {
                min=j;
            }   
        }
       temp=A[i];
       A[i]=A[min];
       A[min]=temp;
    }
    
}
int main()
{
    int size=5;
    int array[size];//={6,3,31,8,4}; 
  //  printf("enter the size of array\n");
  //  scanf("%d",&size);
    printf("enter the array element\n");  
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
    display(array,size);
    selection(array,size);
    display(array,size);
    return 0;
}