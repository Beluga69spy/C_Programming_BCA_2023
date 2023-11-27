//Write a program in C to calculate the area of Circle
#include<stdio.h>
int main(){
    float radius, area;
    printf("ENTER THE RADIUS: \n");
    scanf("%f", &radius);
    area = 3.14*radius*radius;
    printf("THE AREA OF THE CIRCLE IS: %.2f", area);
}