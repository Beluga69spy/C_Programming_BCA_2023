//Write a program in C to calculate the area of Rectangle
#include<stdio.h>
int main(){
    double length,width,area;
    printf("ENTER THE LENGTH OF THE RECTANGLE: ");
    scanf("%lf", &length);
    printf("ENTER THE WIDTH OF THE RECTANGLE: ");
    scanf("%lf", &width);
    area = length*width;
    printf("AREA OF THE RECTANGLE IS: %.2lf\n", area);
}