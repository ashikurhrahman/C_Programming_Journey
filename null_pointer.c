#include<stdio.h>

int main(){
    int *ptr = NULL;

    if (ptr == NULL)
    {
        printf("The pointer is now null (NULL). There is no danger!\n"); 
    }
    else{
        printf("Pointer's Value: %p\n", ptr);
    }

    return 0;
}