#include <stdio.h>

int f(int x){
    if(x<2){
        return x;
    }else{ 
        return f(x-1)+f(x-2);
    }
}

int f_for(int x){
    int item = 0;
    int next = 1;
    for(int i=0;i<x;i++){
        next += item;
        item = next - item;
    }
    return item;
}

int f_while(int x){
    int item = 0;
    int next = 1;
    int i = 0;
    int n= x/2;
    while(i<n){
        item += next;
        next += item;
        i++;
    }
    if(x%2==0){
        return item;
    }else{
        return next;
    }
    
}

int main()
{
    int x=10;
    printf("%d",f_for(x));

    return 0;
}
