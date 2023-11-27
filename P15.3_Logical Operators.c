#include<stdio.h>
int main(){
    int a, b;
    printf("ENTER A NUMBER- A: ");
    scanf("%d", &a);
    printf("ENTER A NUMBER- B: ");
    scanf("%d", &b);
    if (a>0 && b>0){
        printf("BOTH THE NUMBERS %d AND %d ARE POSITIVE !!\n", a, b);
    }else if(a<0 && b<0){
        printf("BOTH THE NUMBERS %d AND %d ARE NEGATIVE !!\n", a, b);
    }else{
        printf("AT-LEAST ONE NUMBER IS NON-POSITIVE !!");
    }
}