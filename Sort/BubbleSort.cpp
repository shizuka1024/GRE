#include <stdio.h>

void swap(int a[], int c,int d){
	int temp;
	temp=a[c];
	a[c]=a[d];
	a[d]=temp;
}

int main()
{
    int a[] = {28,13,37,5,46,69,9,57,41};
    int length = sizeof(a)/sizeof(a[0]);
    for(int i=length-1 ;i>0; i--){
        for(int j=0 ;j<=i; j++){
            if(a[j]>a[j+1]) swap(a,j,j+1);
        }
    }
    for(int i=0;i<length;i++){
        printf("%d,", a[i]);
    }
    return 0;
}
