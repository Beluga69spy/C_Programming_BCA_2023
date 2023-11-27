#include<stdio.h>
int main(){
    int a, ShiftAmount, result1, result2;
    printf("ENTER A NUMBER: ");
    scanf("%d", &a);
    printf("ENTER HOW MANY TIMES OF POSITIONS TO SHIFT: ");
    scanf("%d", &ShiftAmount);
    result1 = a << ShiftAmount;
    result2 = a >> ShiftAmount; // When the number is negative
    printf("AFTER LEFT SHIFTING: %d\n", result1);
    printf("AFTER RIGHT SHIFTING: %d\n", result2);
}