#include <stdio.h>
#include <stdlib.h>

int main()
{
    int position;
    printf("Enter your position in the competition : \n");
    scanf("%d", &position);
    if(position <= 0){
        printf("Please enter a valid position");
    }
    else if(position == 1){
        printf("Gold medal.");
    }else if(position == 2){
        printf("Silver medal.");
    }else if(position == 3){
        printf("Bronze medal.");
    }else{
        printf("No medal.");
    }

    return 0;
}
