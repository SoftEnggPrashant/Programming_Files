#include<stdio.h>
//*****************with return type no parameter********
void printNO(int n){
    if(n<=0){
        return;
    }
        printNO(n-1);
        printf("%d\n",n);
}
void main(){
   int a;
   printf("enter the values\n");
   scanf("%d",&a);
   printNO(a);
}