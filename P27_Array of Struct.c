#include<stdio.h>
#include<string.h>

struct Student
        {
    char name[20];
    double cgpa;
};
int main(){
    struct Student student1 = {"Spongebob", 10.0};
    struct Student student2 = {"Patrick", 8.5};
    struct Student student3 = {"Peter", 9.0};
    struct Student student4 = {"Squidward", 8.0};
    struct Student students[] = {student1, student2, student3, student4};
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%-10s\t", students[i].name);
        printf("%.2lf\n", students[i].cgpa);
    }

    return 0;
}