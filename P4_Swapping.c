-//write a program in C to perform swap the value of two variables Using a Temporary Variable
#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    // Swapping using a temporary variable
    temp = a;
    a = b;
    b = temp;

    printf("After swapping, a = %d and b = %d\n", a, b);

    return 0;
}
