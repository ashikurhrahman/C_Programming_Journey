#include<stdio.h>

void sayHello(int n){
    printf("Hello! I am a function, my value: %d\n", n);
}

int main(){
    void (*funcPtr)(int) = sayHello;

    funcPtr(100);

    return 0;
}