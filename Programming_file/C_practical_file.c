#include<stdio.h>
// #include<conio.h>

void main(){
    
    int arr[10],i,*ptr;
    ptr = arr;
    printf("Enter the array elements\n");
    for(i=0;i<10;i++)
        scanf("%d",ptr+i);
    for(i=0;i<10;i++)
    {
        printf("%d  ",*(ptr+i));
    }
    // printf("The lessthen 50 values is an intered : %d\n",cnt);
    //getch();
}