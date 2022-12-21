#include <stdio.h>
double calculate_exponent(int b,int e){
    if(e==0){
        return 1;
    }
    return b*calculate_exponent(b,e-1);
}

int main()
{
    int b = 2;
    int e = -2;
    if(e<0){
        e=e*(-1);
        printf("%.2f",1/calculate_exponent(b,e));
    }else{
        printf("%.2f",calculate_exponent(b,e));
    }
    
    return 0;
}
