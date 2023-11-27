//Write a program in c to perform addition,substraction,multiplication and division of two variable by taking user input.
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    printf("Enter value of a: ");
    scanf("%d",&a);
    printf("Enter value of b: ");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=b/a;
    printf("Addition=%d\n",c);
    printf("Substaction=%d\n",d);
    printf("Multiplication=%d\n",e);
    printf("Division=%d\n",f);
}
