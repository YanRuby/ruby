#include<stdio.h>
#include<math.h>
int main(){
    int  base, exponent ,result;
    printf("================================\n");
    printf("|> ED1 Power Function\n");
    printf("================================\n");
    printf("Please Enter base and power.\n");
    printf("* * * * * * * * * * * * * * * *\n");

    scanf("%d %d", &base, &exponent);
    if ( base != 0 ){
        result = pow(base,exponent);
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
}