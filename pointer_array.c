#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;

    printf("Array elements and their memory:\n");

    for (int i = 0; i < 5; i++)
    {
        // *(ptr + i) means to increment the pointer and get the value of that cell
        printf("Element: %d, Adress: %p\n", *(ptr + i), (ptr + i));

    }
    return 0;
}