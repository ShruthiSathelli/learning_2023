#include<stdio.h>
int bit_operations(int num,int oper_type){
    switch(oper_type){
        case 1 : num = num|(1<<0);
                return num;
                 break;
        case 2 : num=num& ~(1<<31);
                 return num;
                 break;
        case 3 : num=num^(1<<15);
                 return num;
                 break;
        default : printf("Invalid bit operation\n");
                  break;
    }
}
int main(){
    int number,operation;
    printf("Enter 32 bit number:");
    scanf("%d",&number);
    printf("Enter cases(1,2,3):");
    scanf("%d",&operation);
    int res=bit_operations(number,operation);
    printf("The Number is %d",res);
    return 0;
}