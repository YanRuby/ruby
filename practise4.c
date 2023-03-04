#include <stdlib.h>
#include<stdio.h>
int main(){
    int score , level;
    while( score != -1 )
    {
        printf("================================\n");
        printf("Please Enter score.\n");
        scanf("%d", &score);
        if( score==-1 )
        {
            break;
        }
        if (score < 0 | score > 100 ){
        score = 111;
        }
        level = score / 10;
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
            case 5:
            case 4:
            case 3:
            case 2:
            case 1:
            case 0:
                printf("F\n");
                break;
            return 0 ;
        }
        
        
    }
    printf("End of run...\n");
}