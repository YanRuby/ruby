#include<stdio.h>
#include<math.h>
int main(){
    int  i , base , exponent ,result;
    printf("================================\n");
    printf("|> ED1 Power Function\n");
    printf("================================\n");
    printf("Please Enter base and power.\n");
    printf("* * * * * * * * * * * * * * * *\n");
    result=1;
    scanf("%d %d", &base, &exponent);
    for(i=1;i<=exponent; i=i+1){
        result=result*base;
    }
    
    if ( base != 0 ){
        
        printf(">> Pow( %d, %d ) = %d\n", base, exponent, result);
    }
    else if( base == 0 & exponent == 0){
        printf(">> Pow( %d, %d ) = Does not exist!!!\n", base, exponent);
    }
    else if(base == 0 ){
        printf(">> Pow( %d, %d ) = e^0 = 1\n", base, exponent);;
    }
    else {
        printf("Does not exist!!!!!\n");
    }
    return 0 ; 
}