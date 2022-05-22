#include<stdio.h>

void main(){
    int max_size(char*);
    char a[20],b[20],c[20];
    int a_size,b_size,c_size;
    printf("enter the string values\n");
    scanf("%s","%s","%s",a,b,c);
    a_size = max_size(a[0]);
    b_size = max_size(b[0]);
    c_size = max_size(c[0]);

    if(a_size>b_size && a_size >c_size){
        printf("the max string length is:%d",a_size);
    }
    else if(b_size>a_size && b_size > c_size){
        printf("the max string length is:%d",b_size);
    }
    else{
        printf("the max string length is : %d",c_size);
    }
}
int max_size(char arr[0]){
    int i;
    for(i=0;i<20;i++){
        if(arr[i]=='\0') 
           break;
    }
    return i;
}