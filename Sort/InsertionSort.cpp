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
    int a[] = {28,13,37,5,46,69,9,57,41};
    int length = sizeof(a)/sizeof(a[0]);
    for(int i=1;i<length;i++){
        insert(a, a[i], i);
    }
    for(int i=0;i<length;i++){
        printf("%d,", a[i]);
    }

    return 0;
}
