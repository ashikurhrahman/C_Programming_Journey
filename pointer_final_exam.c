#include<stdio.h>

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    int *ptr = arr;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + *(ptr + i);
    }
    printf("Sum is: %d\n",sum);

    return 0;
}