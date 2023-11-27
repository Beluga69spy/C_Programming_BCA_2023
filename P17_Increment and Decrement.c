#include<stdio.h>
int main(){
    int i = 5;
    int result1, result2, result3, result4;
    printf("Initial Value of i: %d\n", i);
    result1 = ++i;
    printf("After Prefix Increment (i becomes 6): i = %d, result1 = %d\n", i, result1);
    result2 = i++;
    printf("After Postfix increment (i becomes 7): i = %d, result2 = %d\n", i, result2);
    result3 = --i;
    printf("After prefix decrement (i becomes 6): i = %d, result3 = %d\n", i, result3);
    result4 = i--;
    printf("After postfix decrement (i becomes 5): i = %d, result4 = %d\n", i, result4);

}