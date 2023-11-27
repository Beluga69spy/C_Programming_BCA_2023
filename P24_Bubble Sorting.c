//#include<stdio.h>
//void sort(char array[], int size)
//{
//for(int i = 0; i < size - 1; i++)
//{
//    for(int j = 0; j < size - 1; j++)
//    {
//        if(array[j] > array[j+1])
//        {
//            int temp = array[j];
//            array[j] = array[j+1];
//            array[j+1] = temp;
//        }
//    }
//
//}
//
//}
//void printArray(char array[], int size)
//{
//    for(int i = 0; i < size; i++)
//    {
//        printf("%c ", array[i]);
//    }
//}
//
//int main(){
//   // int array[] = {9,2 ,4, 5, 6, 1};
//   char array[] = {'B', 'A', 'F', 'C', 'D'};
//    int size = sizeof(array)/sizeof(array[0]);
//
//    sort(array, size);
//    printArray(array, size);
//    return 0;
//}

#include<stdio.h>
int main(){
    int arr[] = {10, 5, 2, 1, 30, 7};
    int stop = 6;
    for(int i = 0; i < stop; i++){
        for(int j = 0; j < stop; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    for(int i = 0; i < stop; i++){
        printf("%d ", arr[i]);
    }
}



