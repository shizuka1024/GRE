#include <stdio.h>

void swap(int a[],int c,int d){
	int temp;
	temp=a[c];
	a[c]=a[d];
	a[d]=temp;
}

int find_min(int a[],int i,int n){
    int k=i;
    for(int j=i+1;j<n;j++){
        if(a[j]<a[k]) k=j;
    }
    return k;
}

int main()
{
    int a[] = {28,13,37,5,46,97,77,99,55,79};
    int length = sizeof(a)/sizeof(a[0]);
    
    for(int i=0 ;i<length; i++){
        int min_addr = find_min(a, i, length);
        swap(a,i,min_addr);
    }
    
    for(int i=0;i<length;i++){
        printf("%d,", a[i]);
    }
    return 0;
}
