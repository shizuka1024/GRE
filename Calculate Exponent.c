#include <stdio.h>
//no negative exponent value
int calculate_exponent(int b,int e){
    if(e==0){
        return 1;
    }
    return b*calculate_exponent(b,e-1);
}

int main()
{
    int b = 7;
    int e = 3;
    printf("%d",calculate_exponent(b,e));

    return 0;
}
