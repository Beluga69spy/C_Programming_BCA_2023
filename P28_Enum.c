#include<stdio.h>

enum Day{Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7};
int main(){

    enum Day today = Mon;
    if(today == Sun || today == Sat)
    {
        printf("Its weekend, Party !!");
    }else{
        printf("Agh! Working..");
    }

    return 0;

}