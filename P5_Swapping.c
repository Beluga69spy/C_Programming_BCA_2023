-//write a program in C to perform swap the value of two variables Without Using a Temporary Variable (Using Arithmetic Operations)
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    // Swapping without using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}
