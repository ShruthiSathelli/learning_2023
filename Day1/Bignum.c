#include<stdio.h>
int bignum_if_else(int n1,int n2){
    if(n1>n2)
        return n1;
    else 
        return n2;
}
int bignum_ternary(int n1,int n2){
    return (n1>n2)?n1:n2;
}
int main(){
    int n1,n2;
    printf("Enter First Number:");
    scanf("%d",&n1);
    printf("Enter Second Number:");
    scanf("%d",&n2);
    printf("Biggest Number is %d\n",bignum_if_else(n1,n2));
    printf("Biggest Number is %d",bignum_ternary(n1,n2));
    return 0;
}