#include<stdio.h>
/* * This function takes a string pointer as input
* and calculates the length of the string using the pointer.
*/
int stringLength(char*str){
    int count = 0;// Variable to hold the length

    // The loop will countinue untill the pointer reaches the null character'\0'
    while (*str != '\0')
    {
        count++; // Incrementing the count for each character
        str++;  // Moving the pointer to the address of the next character
    }
    return count;// Returning the total length
    
}

int main(){
    // Declaring a string
    char myString[] = "Programming";

    // Calling the function to get the length of the string
    int len = stringLength(myString);

    // Printing the result
    printf("The length of the string is: %d\n", len);
    
    return 0;
}