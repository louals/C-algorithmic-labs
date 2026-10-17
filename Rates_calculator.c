#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int extra;
    printf("Enter the weight in grams : \n");
    scanf("%d", &a);
    if (a < 1) {
        printf("Error");
    } else {
        switch (a) {
            case 1 ... 20:
                printf("20DA");
                break;

            case 21 ... 50:
                printf("40DA");
                break;

            case 51 ... 100:
                printf("50DA");
                break;

            default:
                extra = 50 + ((a - 100) / 100) * 10;
                printf("%d" "DA", extra );
                break;
        }
    }

    return 0;
}
