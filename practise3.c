#include <stdlib.h>
#include<stdio.h>
int main(){
    int score , level;
    printf("================================\n");
    printf("Please Enter score.\n");
    scanf("%d", &score);
    if (score < 0 | score > 100){
        score = 111;
    }
    level = score / 10;
    printf("================================\n");

    switch(level)
    {
        case 11:
            printf("Does not exist!!!!!\n");
            break;
        case 10:
            printf("A\n");
            break;
        case 9:
            printf("B\n");
            break;
        case 8:
            printf("C\n");
            break;
        case 7:
            printf("D\n");
            break;
        case 6:
            printf("E\n");
            break;
        default:
            printf("F\n");
    }
    return 0 ; 
}