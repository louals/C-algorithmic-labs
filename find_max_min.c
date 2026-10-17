#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N, i, X, Max, Min;

    printf("How many numbers would you like to input ? ");
    scanf("%d", &N);


    if (N <= 0) {
        printf("Please enter a valid count.\n");
        return 0;
    }

    printf("Please enter the first number: ");
    scanf("%d", &X);

    Max = X;
    Min = X;


    for (i = 0; i < N - 1; i++) {
        printf("Enter next number: ");
        scanf("%d", &X);

        if (X > Max) {
            Max = X;
        } else if (X < Min) {
            Min = X;
        }
    }

    printf("Maximum is: %d\n", Max);
    printf("Minimum is: %d\n", Min);

    return 0;
}
