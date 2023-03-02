// Start Info 程式執行時輸出
#include<stdio.h>
#include<math.h>
int main(){
    double  base, exponent ,result;
    printf("================================\n");
    printf("Please Enter base and power.\n");
    scanf("%lf %lf", &base, &exponent);
    printf("================================\n");

    if ( base != 0 ){
        result = pow(base,exponent);
        printf("%.lf^%.lf = %.2lf", base, exponent, result);
    }
    else if( base == 0 & exponent == 0){
        printf("Does not exist!!! \n");
    }
    else if(base == 'e' ){
        result = exp(exponent);
        printf("e^%.lf = %.2lf", exponent, result);
    }
    else {
        printf("Does not exist!!!!!\n");
    }
}