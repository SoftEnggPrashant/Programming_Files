#include<stdio.h>
#include<stdlib.h>
void main(){
                     //*********************** to add the data from file****************************
    FILE *f;
    char reads[50];
    scanf("%s",reads);

    f = fopen("file.txt","w+");
    if(f==NULL){
        printf("\n the file can not open ");
    }
    else{
        fprintf(f,"%s",reads);
    }
    

    //***************************** to read the data from file***********************

    //f = fopen("file.txt","r");
    if(f==NULL){
        printf("the data can not be read");
    }
    else{
        while(fgets(reads,50,f)!=NULL){
            printf("%s",reads);
        }
    }

    fclose(f);
}