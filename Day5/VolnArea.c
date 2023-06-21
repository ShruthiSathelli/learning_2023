#include<stdio.h>
struct Box{
    float length;
    float width;
    float height;
};
typedef struct Box Box;
float findVolume(Box *ptr){
    int res = ptr->length*ptr->width*ptr->height;
    return res;
}
float findSurfaceArea(Box *ptr){
    float l=ptr->length;
    float w=ptr->width;
    float h=ptr->height;
    return 2*((l*w)+(w*h)+(h*l));
}
int main(){
    Box b1;
    Box *ptr=&b1;
    printf("Enter l,w,h:");
    scanf("%f%f%f",&b1.length,&b1.width,&b1.height);
    printf("Volume=%.2f\n",findVolume(ptr));
    printf("surfacearea=%.2f\n",findSurfaceArea(ptr));
    return 0;
}
