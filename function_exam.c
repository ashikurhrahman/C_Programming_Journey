#include<stdio.h>

int multiply(int x, int y){
    return x * y;
}
int main(){
    int result = multiply(10, 20);
    printf("Result is: %d\n", result);
    return 0;
}