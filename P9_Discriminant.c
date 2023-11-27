//Write a program in C to calculate the discriminant of an equation
#include<stdio.h>
int main(){
    float a,b,c,d;
    printf("ENTER THE VALUE OF A:\n");
    scanf("%f", &a);
    printf("ENTER THE VALUE OF B:\n");
    scanf("%f", &b);
    printf("ENTER THE VALUE OF C:\n");
    scanf("%f", &c);
    d=b*b-4*a*c;
    printf("THE VALUE OF D IS: %.2f", d);

}