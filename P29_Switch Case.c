#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks: \n");
    scanf("%d", &marks);
    switch(marks){
        case 95:
        printf("Grade is Outstanding !\n");
        break;
        case 85:
            printf("Grade is Excellent !\n");
            break;
        case 75:
            printf("Grade is Good !\n");
            break;
        case 65:
            printf("Grade is Try Hard !\n");
            break;
        default:
            printf("You Failed !\n");
    }
    printf("Code Executed !!\n");
}