#include <stdio.h>

void swap(int a[], int c,int d){
	int temp;
	temp=a[c];
	a[c]=a[d];
	a[d]=temp;
}

void insert(int a[], int n, int i){
    
    while(i>0 && n<a[i-1]){
        swap(a ,i ,i-1);
        i--;
    }
}

int main()
{
    int a[] = {28,13,37,5,46};
    for(int i=1;i<5;i++){
        insert(a, a[i], i);
    }
    for(int i=0;i<5;i++){
        printf("%d,", a[i]);
    }

    return 0;
}
