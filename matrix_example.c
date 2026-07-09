#include<stdio.h>

int main(){
    int matrix[3][3]; //Matrix with 3 rows and 3 columns
    int i, j;

    printf("Input 9 digits:\n");

    //Nested loop (loop within a loop) for taking input
    for ( i = 0; i < 3; i++) //For Rows
    {
        for ( j = 0; j < 3; j++) //For collumns
        {
            printf("Matrix [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
        
    }
    // To print the matrix nicely
    printf("\nYour matrix is:\n");
    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d\t", matrix[i][j]); //Giving nice tab spaces with \t
        }
        printf("\n"); //New line after each line is printed.
        
    }
    
    return 0;
}