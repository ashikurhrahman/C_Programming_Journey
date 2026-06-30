#include<stdio.h>

// This function finds the largest number in this array 
 int findMax(int *arr, int size){
    int max = *arr; // Initially, we assumed the first number to be large.

    // Comparing each element through a loop
    for (int i = 1; i < size; i++){
        if (*(arr + i )>max)
        {
            max = *(arr + i);  // Updating Max if the new value is larger 
        }
        
    }

    return max; // Returning the larger value 
 }

 int main(){
    int arr[5] = {15, 87, 2, 99, 43};
    int size = 5;

    // Calling the function to get the larger value 
    int maxVal = findMax(arr, size);
     
    printf("The largest number in this array is: %d\n", maxVal);

    return 0;
 }