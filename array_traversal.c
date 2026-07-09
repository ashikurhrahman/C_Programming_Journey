#include<stdio.h>

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int i;

    // Updating each element of the array by adding 10
    for (i = 0; i < 5; i++)
    {
        arr[i] = arr[i] + 10;
    }
    // Now we are printing the new values of the array 
    for (i = 0; i < 5; i++)
    {
        printf("Value of Index %d: %d\n",i,arr[i]);
    }

    return 0;
    
}