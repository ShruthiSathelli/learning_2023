/*#include<stdio.h>
int bitcount(int n){
    unsigned int mask = (1<<32);
    for(int i=0;i<32;i++){
        int bit = (n & mask)?1:0;
        printf("%d",bit);
        mask>>=1
    }printf("\n");
}
int main(){
    int n;
    printf("Enter 32 bit interger:");
    scanf("%d",&n);
    bitcount(n);
    return 0;
}*/
#include <stdio.h>

void printBits(int num) {
    unsigned int mask = 1 << 31; // Start with the leftmost bit
    int i;

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) ? 1 : 0;
        printf("%d", bit);
        mask >>= 1; // Shift the mask to the right
    }

    printf("\n");
}

int main() {
    int num;
    printf("Enter a 32-bit integer: ");
    scanf("%d", &num);

    printf("Binary representation: ");
    printBits(num);

    return 0;
}
