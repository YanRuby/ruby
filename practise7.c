#include <stdio.h>
#include<stdlib.h> //生成隨機數用
#include<math.h>
int main(){
    int  i , j , length , Width ;
    printf("Please Enter length and Width.\n");
    scanf("%d %d", &length, &Width);
    int a[length][Width] ;

    for(i=0 ; i<=length-1 ; i=i+1){
        for (j=0 ; j<=Width-1 ; j=j+1 ) {
            a[i][j]=rand()%2+0 ;
            if ( i == 0 | i == length-1){
                a[i][j] = 0;
                printf(" *");
            }
            else if( j == 0 | j == Width-1){
                a[i][j] = 0;
                printf(" *");
            }
            else if( a[i][j] == 0 ){
                printf("  ");
            }
            else if( a[i][j] == 1 ){
                printf(" 1");
            }
        } 
        printf("\n");
    }
    int row , col ,k ,l;
    printf("Please Enter row and col.\n");
    scanf("%d %d", &row, &col);

    a[row][col] =9 ; 
    if ( a[row+1][col]==1){ 
        a[row+1][col]=8; 
    } 
    if ( a[row][col+1]==1){ 
        a[row][col+1]=8; 
    } 
    if ( a[row-1][col]==1){ 
        a[row-1][col]=8; 
    } 
    if ( a[row][col-1]==1){ 
        a[row][col-1]=8; 
    } 

        
    for(i=0 ; i<=length-1 ; i=i+1){
        for (j=0 ; j<=Width-1 ; j=j+1 ) {
            for (k=0 ; k<=length-1 ; k=k+1 ) {
                for (l=0 ; l<=Width-1 ; l=l+1 ) {
                    if(a[row-i+k][col-j+l]==8){
                        if(row-i+k-1>0 & col-j+l>0){
                            if(a[row-i+k-1][col-j+l]==0){
                            }
                            else if(a[row-i+k-1][col-j+l]==1){
                                a[row-i+k-1][col-j+l]=8 ; 
                            }
                        }           
                        if(row-i+k+1>0 & col-j+l>0){
                            if(a[row-i+k+1][col-j+l]==0){
                            }
                            else if(a[row-i+k+1][col-j+l]==1){
                                a[row-i+k+1][col-j+l]=8 ; 
                            }
                        }
                        if(row-i+k>0 & col-j+l-1>0){
                            if(a[row-i+k][col-j+l-1]==0){
                            
                            }
                            else if(a[row-i+k][col-j+l-1]==1){
                                a[row-i+k][col-j+l-1]=8 ; 
                            }
                        }
                        if(row-i+k>0 & col-j+l+1>0){
                            if(a[row-i+k][col-j+l+1]==0){
                            
                            }
                            else if(a[row-i+k][col-j+l+1]==1){
                                a[row-i+k][col-j+l+1]=8 ; 
                            }
                        }
                    }
                }
            }
        }
    }
    


    for(i=0 ; i<=length-1 ; i=i+1){
        for (j=0 ; j<=Width-1 ; j=j+1 ) {
            if ( i == 0 | i == length-1){

                printf(" *");
            }
            else if( j == 0 | j == Width-1){

                printf(" *");
            }
            else if(a[i][j]==0){

                printf("  ");
            }
            else if(a[i][j]==8){

                printf(" 8");
            }
            else {
                printf(" %d",a[i][j]) ;
            }
        } 
        printf("\n");
    }
}