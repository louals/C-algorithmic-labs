#include <stdio.h>
#include <unistd.h>

int main() {
    int x, i, j;

    printf("Multiplication Table \n");
    printf("Give me a number: \n");
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
        printf("Table of multiplication of : %d \n", i);
        for (j = 1; j <= 10; j++) {
            printf("|%d x %d = %d |\n", i, j, j * i);
        }
        printf("\n");
    }
    return 0;
}
