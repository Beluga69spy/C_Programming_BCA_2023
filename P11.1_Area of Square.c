//Write a program in C to calculate the area of Square
#include<stdio.h>
int main(){
    double side, area;
    printf("ENTER THE SIDE LENGTH OF SQUARE:");
    scanf("%lf", &side);
    area=side*side;
    printf("AREA OF THE SQUARE: %.2lf\n", area);
    return 0;
}