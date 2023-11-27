//Write a program in C to calculate the area of Triangle
#include<stdio.h>
int main(){
    double base,height,area;
    printf("ENTER THE BASE OF THE TRIANGLE:");
    scanf("%lf", &base);
    printf("ENTER THE HEIGHT OF THE TRIANGLE:");
    scanf("%lf", &height);
    area = 005*base*height;
    printf("AREA OF THE TRIANGLE IS: %.2lf\n", area);

}