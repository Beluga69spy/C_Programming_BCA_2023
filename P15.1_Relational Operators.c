#include<stdio.h>
int main(){
    int a, b;
    printf("ENTER A NUMBER-A: ");
    scanf("%d", &a);
    printf("ENTER A NUMBER-B: ");
    scanf("%d", &b);
    if(a>b){
        printf("A=%d IS GREATER THAN B=%d !!\n", a, b);
    }else if(a<b){
        printf("B=%d IS GREATER THAN A=%d !!\n", b, a);
    }else{
        printf("A=%d IS EQUAL TO B=%d !!\n", a, b);
    }
}