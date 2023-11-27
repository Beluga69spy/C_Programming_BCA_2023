//Write a program in C to calculate the area of Trapezium
#include<stdio.h>
int main(){
    double a, b, height, area;
    printf("ENTER THE LENGTH OF TWO PARALLEL SIDE: ");
    scanf("%lf %lf", &a, &b);
    printf("ENTER THE HEIGHT OF THE TRAPEZIUM: ");
    scanf("%lf", &height);
    area = 0.5*(a+b)*height;
    printf("AREA OF THE TRAPEZIUM: %.2lf\n", area);

}