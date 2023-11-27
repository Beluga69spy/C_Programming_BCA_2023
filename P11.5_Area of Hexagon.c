//Write a program in C to calculate the area of Hexagon
#include<stdio.h>
int main(){
    double side, area;
    printf("ENTER THE SIDE LENGTH OF HEXAGON: ");
    scanf("%lf", &side);
    area = (3*1.732*side*side)/2;
    printf("AREA OF THE HEXAGON: %.2lf", area);

}