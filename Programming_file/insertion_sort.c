#include<stdio.h>

void display(int* A,int n)
{
    for (int  i = 0; i <= n-1; i++)
    {
        printf("%d ",A[i]);
    }
    printf("\n");
}
void insertion(int* A,int n)
{
    int temp,j;
    for (int  i = 1; i <=n-1; i++)
    {
         temp=A[i];
         j=i-1;
        while (j>=0 && A[j]>temp)
        {
            /* code */
           A[j+1]=A[j];
           j--; 
        }
        
        A[j+1]=temp;
        
    }
    
}
int main()
{
    
    int size;
    printf("entre the array size\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter the array element is:\n");
    for (int  i = 0; i <= size-1; i++)
    {
        scanf("%d",&arr[i]);
    }
    display(arr,size);
    insertion(arr,size);
    display(arr,size);
    return 0;
}