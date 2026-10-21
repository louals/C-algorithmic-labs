#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit, N, sum;
    printf("Enter a num: ");
    scanf("%d", &N);

    sum = 0;
    while (N > 0) {
        digit = N % 10;
        sum = sum + digit;
        N = N / 10;
    }

    printf("%d", sum);
    return 0;
}
