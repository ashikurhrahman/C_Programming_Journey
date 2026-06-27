#include<stdio.h>

int main(){
    int age = 25;
    int *ptr = &age;

    printf("Age value: %d\n", age);
    printf("Age address: %p\n", ptr);

    return 0;

}