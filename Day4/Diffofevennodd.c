#include<stdio.h>
int EvennOdd(int arr[],int len){
    int i,even=0,odd=0;
    for(i=0;i<len;i++){
        if(arr[i]%2==0){
            even+=arr[i];
        }else{
            odd+=arr[i];
        }
    }
        printf("The sum of even numbers is %d\n",even);
        printf("The sum of add numbers is %d",odd);
}int main(){
     int len,i,sum=0,avg;
    printf("Enter length of array:");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    EvennOdd(arr,len);
    return 0;
}