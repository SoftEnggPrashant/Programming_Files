#include <stdio.h>

void display(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

void merge(int A[], int l, int h, int mid)
{
    int B[100];
    int i, j, k;
    //    mid=(l+h)/2;
    i = l;
    j = mid + 1;
    k = l;
    while (i <= mid && j <= h)
    {
        if (A[i] < A[j])
        {
            B[k] = A[i];
            k++;
            i++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    while (j <= h)
    {
        B[k] = A[j];
        k++;
        j++;
    }

    for (int i = l; i <= h; i++)
    {
        A[i] = B[i];
    }
}
void mergshort(int A[], int l, int h)
{
    int mid;
    if (l < h)
    {
        mid = (l + h) / 2;
        mergshort(A, l, mid);
        mergshort(A, mid + 1, h);
        merge(A, l, h, mid);
    }
}
    
int main()
{
    int size = 6;
    int arr[size];
    printf("enter the array element is:");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    display(arr, size);
    mergshort(arr, 0, size - 1);
    display(arr, size);
    return 0;
}