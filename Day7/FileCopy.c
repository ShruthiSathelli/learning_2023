#include<stdio.h>
int main(){
    FILE *fp1,*fp2;
    char ch;
    fp1=fopen("hi.txt","r");
    fp2=fopen("hello.txt","w");
    if(fp1==NULL){
        printf("File Doesn't Exist\n");
    }
    else{
        printf("File Exist\n");
    }
    ch=fgetc(fp1);
    while(ch!=EOF){
        fputc(ch,fp2);
        ch=fgetc(fp1);
    }
    printf("Successfully copied Content.\n");
    fclose(fp2);
    fclose(fp1);
    return 0;
}