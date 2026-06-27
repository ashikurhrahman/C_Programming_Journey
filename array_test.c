#include<stdio.h>

int main(){
    int arr[5];
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter number %d: ", i+1);
        scanf("%d", &arr[i]);

        sum = sum + arr[i];
    }
    printf("Total Sum is: %d\n", sum);

    return 0;
}