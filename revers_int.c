#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int reverse(int n){
    int i = sizeof(n);
    int j = 0;
    int temp = n;
    while(i>0){
        j += (temp%10)*(pow(10,i-1));
        temp = temp/10;
        i--;
    }
    return j;
}

int main()
{
    int a = 9876;
    int b = reverse(a);
    printf("%d",b);

    return 0;
}
