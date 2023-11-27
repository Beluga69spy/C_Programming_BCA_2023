#include<stdio.h>
int main(){
    int a, b, result;
    printf("ENTER A NUMBER- A: ");
    scanf("%d", &a);
    printf("ENTER A NUMBER- B: ");
    scanf("%d", &b);
    result = a & b;
    printf("A & B = %d\n", result);
}