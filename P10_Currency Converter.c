//Write a program in C to convert the different currencies from INR to Dollar, Euros, Yen, Rubel
#include<stdio.h>
int main(){
    double rupee;
    printf("ENTER THE AMOUNT IN RUPEE:\n");
    scanf("%lf", &rupee);
    printf("AMOUNT IN DOLLAR: %.3lf\n", rupee*0.0121);
    printf("AMOUNT IN EUROS: %.3lf\n", rupee*0.0112);
    printf("AMOUNT IN YEN: %.3lf\n", rupee*1.7719);
    printf("AMOUNT IN RUBEL: %.3lf\n", rupee*1.15);
}