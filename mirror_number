#include <stdio.h>
#include <stdlib.h>

int main()
{
    int digit, mirror, N;
    printf("Enter a num: ");
    scanf("%d", &N);

    mirror = 0;
    while (N > 0) {
        digit = N % 10;
        mirror = mirror * 10 + digit;
        N = N / 10;
    }

    printf("%d", mirror);
    return 0;
}
