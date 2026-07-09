#include<stdio.h>

/* * THis program takes 5 numbers from the user,
*fills an array and then prints it.
 */
int main(){
    int arr[5]; // An empty array of 5 numbers
    int i;

    //Loop to take input from the user
    printf("Input 5 numbers:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Printing the input numbers
    printf("\nThe numbers you gave are:\n");
    for ( i = 0; i < 5; i++)
    {
        printf("%d\n", arr[i]);
    }
    printf("\n");

    return 0;
}