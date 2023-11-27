// Write a program to solve the algebraic Identities
#include<stdio.H>
int main(){
    double a, b, c;
    printf("ENTER THE VALUE OF A: ");
    scanf("%lf", &a);
    printf("ENTER THE VALUE OF B: ");
    scanf("%lf", &b);
    printf("ENTER THE VALUE OF C: ");
    scanf("%lf", &c);
    printf("(a+b)^2 = %.2lf\n", (a+b)*(a+b));
    printf("(a-b)^2 = %.2lf\n", (a-b)*(a-b));
    printf("(a+b)(a-b) = %.2lf\n", (a+b)*(a-b));
    printf("(a+b)^3 = %.2lf\n", (a+b)*(a+b)*(a+b));
    printf("(a-b)^3 = %.2lf\n", (a-b)*(a-b)*(a-b));
    printf("a^3-b^3 = %.2lf\n", (a*a*a)-(b*b*b));
    printf("a^2+2ab+b^2 = %.2lf\n", (a*a)+(2*a*b)+(b*b));
    printf("(a+b+c)^2 = %.2lf\n", (a+b+c)*(a+b+c));
    printf("a^3+b^3 = %.2lf\n", (a*a*a)+(b*b*b));
    printf("a^2-2ab+b^2 = %.2lf\n", (a*a)-(2*a*b)+(b*b));
    printf("(a+b+c)^3 = %.2lf\n", (a+b+c)*(a+b+c)*(a+b+c));
}