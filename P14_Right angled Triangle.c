// Write a C program to check if a triangle is a right-angled triangle or not
#include<stdio.h>
int main(){
    double a, b, c;
    printf("ENTER THE SIDE LENGTH OF TRIANGLE-A: ");
    scanf("%lf", &a);
    printf("ENTER THE SIDE LENGTH OF TRIANGLE-B: ");
    scanf("%lf", &b);
    printf("ENTER THE SIDE LENGTH OF TRIANGLE-C: ");
    scanf("%lf", &c);
    if ( a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b){
        printf("\nIT'S A RIGHT-ANGLED TRIANGLE !!\n");
    }else{
        printf("\nIT'S NOT A RIGHT-ANGLED TRIANGLE !!\n");
    }
}