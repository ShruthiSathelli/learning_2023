#include <stdio.h>
void swap(void *a, void *b, size_t size) {
    unsigned char *p=(unsigned char *)a;
    unsigned char *q=(unsigned char *)b;
    for(size_t i=0;i<size;i++){
        unsigned char temp =p[i];
        p[i]=q[i];
        q[i]=temp;
    }
}

int main() {
    int a;
    int b;
    printf("Enter values of a and b:");
    scanf("%d %d",&a,&b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    swap(&a, &b, sizeof(int));
    printf("After swapping: a = %d, b = %d\n", a, b);
    float x ;
    float y;
    printf("Enter values of x and y");
    scanf("%f %f",&x,&y);
    printf("Before swapping: x = %.2f, y = %.2f\n", x, y);
    swap(&x, &y, sizeof(float));
    printf("After swapping: x = %.2f, y = %.2f\n", x, y);
    return 0;
}