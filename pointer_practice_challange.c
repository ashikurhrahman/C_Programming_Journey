#include<stdio.h>

int main(){
    int x = 500;
    int *ptr = &x;
    int **pptr = &ptr;

    *ptr = 600;
    printf("Now X value: %d\n",x);

    **pptr = 700;
    printf("Finally X value: %d\n",x);

    return 0;
}