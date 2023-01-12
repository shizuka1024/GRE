#include <stdio.h>

int gcd_r(int a,int b){
    if(b) return gcd_r(b,a%b);
    else return a;
}

int gcd_i(int a,int b){
    int c;
    while(b!=0){
        c=a%b;
        a=b;
        b=c;
    }
    return a;
}

int main()
{
    int a=2;
    int b=10;
    printf("%d",gcd_r(a,b));
    printf("\n");
    printf("%d",gcd_i(a,b));

    return 0;
}
