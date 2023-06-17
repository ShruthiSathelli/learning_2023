#include<stdio.h>
int main(){
    int len,i,sum=0,avg;
    printf("Enter length of array:");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<len;i++){
        sum+=arr[i];
    }avg=sum/len;
    printf("The sum of array is %d\n",sum);
    printf("The avg of array is %d",avg);
    return 0;
}