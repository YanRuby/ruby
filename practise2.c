#include<stdio.h>
int main(){
    int score;
    printf("================================\n");
    printf("Please Enter score.\n");
    scanf("%d", &score);
    printf("================================\n");
    if ( score == 100 ){
        printf("A \n");
    }
    else if( score >= 90 & score < 100){
        printf("B \n");
    }
    else if( score >= 80 & score < 90){
        printf("C \n");
    }
    else if( score >= 70 & score < 80){
        printf("D \n");
    }
    else if( score >= 60 & score < 70){
        printf("E \n");
    }
    else {
        printf("F \n");
    }
}