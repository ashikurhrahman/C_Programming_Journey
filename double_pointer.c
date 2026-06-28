#include<stdio.h>

int main(){
    int num = 100;
    int *ptr = &num;
    int **pptr = &ptr;

    printf("Value (num): %d\n",num);
    printf("Pointer's Value: %d\n",*ptr);
    printf("Double Pointer's Value: %d\n",**pptr);

    return 0;
}