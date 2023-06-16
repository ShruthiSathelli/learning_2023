#include<stdio.h>
int main(){
    int operand1,operand2;
    char operator;
    float res;
    printf("Enter operand1:");
    scanf("%d",&operand1);
    printf("Enter operator:");
    scanf("%s",&operator);
    printf("Enter operand:");
    scanf("%d",&operand2);
    switch(operator){
        case '+' : res=operand1+operand2;
                   printf("%f",res);
                   break;
        case '-' : res=operand1-operand2;
                   printf("%f",res);
                   break;
        case '*' : res=operand1*operand2;
                   printf("%f",res);
                   break;
        case '/' : res=operand1/operand2;
                   printf("%f",res);
                   break;
        case '%' : res=operand1%operand2;
                   printf("%f",res);
                   break;
        default  : printf("invalid operator");
                   break;
    }return 0;
}