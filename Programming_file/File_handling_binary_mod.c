#include<stdio.h>
#include<stdlib.h>

struct student{
    int roll;
    char name[20];
    char add[20];
};
void main(){
    struct student e;
    FILE *fb;
    fb = fopen("student.Bin","wb");
    if(fb==NULL){
        printf("Error");
        exit(0);
    }

    printf("Enter the details\n");
    for(int i=0;i<5;i++){
        scanf("%d%s%s",&e.roll,e.add,e.name);
        fwrite(&e,sizeof(e),1,fb);
    }
    fclose(fb);
}