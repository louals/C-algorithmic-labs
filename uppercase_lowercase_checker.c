#include <stdio.h>
#include <stdlib.h>

int main()
{
    char x;
    int Uppercase = 0, Lowercase = 0;

    printf("Enter character (enter # to stop) :\n");
    scanf(" %c", &x);

    while(x != '#') {
        switch(x) {
            case 'a' ... 'z':
                Lowercase++;
                break;

            case 'A' ... 'Z':
                Uppercase++;
                break;
        }
        scanf(" %c", &x);
    }

    printf("Total Uppercase: %d\n", Uppercase);
    printf("Total Lowercase: %d\n", Lowercase);

    return 0;
}
