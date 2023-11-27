//Write a program in C to check whether character is alphabet or not
#include<stdio.h>
int main(){
    char c;
    printf("ENTER A CHARACTER: ");
    scanf("%c", &c);
    if ((c>='a' && c<='z') || (c>='A' && c<='z')){
        printf("%c IS AN ALPHABET\n", c);
    }else{
        printf("%c IS NOT AN ALPHABET\n", c);
    }
}