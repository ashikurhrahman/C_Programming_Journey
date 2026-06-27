#include<stdio.h>

int main(){
    int age = 25;
    int *ptr = &age;

    printf("%d\n", age);

 *ptr = 30;

 printf("%d\n", age);

 return 0;
}