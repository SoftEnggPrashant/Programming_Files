#include<stdio.h>
#include<stdlib.h>

// struct student{
//     int roll;
//     char name[20];
//     char add[20];
// };
// void main(){
//     struct student e;
//     FILE *fb;
//     fb = fopen("student.Bin","rb");
//     if(fb==NULL){
//         printf("Error");
//         exit(0);
//     }

//     printf("the Student details : \n");
//     for(int i=0;i<5;i+=2){
//         // fread(&e,sizeof(e),1,fb);
//         // printf("%d %s %s\n",e.roll,e.add,e.name);
//         fseek(fb,i*sizeof(e),SEEK_SET);
//         fread(&e,sizeof(e),1,fb);
//         printf("%d %s %s \n",e.roll,e.add,e.name);
//     }
//     fclose(fb);
// }

void main(){

    FILE *fb;
    char name[20];
    char c[20];

    fb = fopen("file.txt","w+");
    if(fb==NULL)
    printf("Error!|n");

    printf("Enter the name\n");
    scanf("%s",name);
    fprintf(fb,"%s\n",name);
    fseek(fb,0,SEEK_SET);
    fscanf(fb,"%s",c);
    printf("%s\n",c);
}