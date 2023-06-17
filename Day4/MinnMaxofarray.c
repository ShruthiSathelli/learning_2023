#include<stdio.h>
int main(){
    int len,i;
    printf("Enter length of array:");
    scanf("%d",&len);
    int arr[len];
    for(i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int min=arr[0],max=arr[0];
    for(i=0;i<len;i++){
        if(arr[i]<min){
            min=arr[i];
        }
        if(arr[i]>max){
            max=arr[i];
        }
        }
        printf("The Minimum element in array is %d\n",min);
        printf("The Maximum element in array is %d",max);
    return 0;
    }