#include <stdio.h>
#include <stdlib.h>

int main()
{
    int S;
    scanf("%d", &S);

    if (S < 1 || S > 300) {
        printf("Please enter a valid Seat ! ");
    }
    else if (S % 20 == 0) { 
        printf("Column is : %d and Row is : %d", 20, S / 20);
    }
    else {
        printf("Column is : %d and Row is : %d", S % 20, (S / 20) + 1);
    }

    return 0;
}
