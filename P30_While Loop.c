#include<stdio.h>
int main(){
    int start, end;
    printf("Print all the even numbers till: ");
    scanf("%d", &end);
    printf("All the even numbers from 1 to %d are: \n", end);
    start = 1;
    while(start <= end){
        if(start % 2 == 0){
            printf("%d ", start);
        }
        start++;
    }
}