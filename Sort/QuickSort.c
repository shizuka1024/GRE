#include <stdio.h>

void swap(int a[],int c,int d){
	int temp;
	temp=a[c];
	a[c]=a[d];
	a[d]=temp;
}

int partition(int a[],int left,int right){
    int pivot = a[left];
    int ptr = left; int i;
    for(i=left+1;i<=right;i++){
        if(pivot>=a[i]){
            ptr++;
            swap(a,ptr,i);
        }
    }
    swap(a , left, ptr);
    return ptr;
}

void quicksort(int a[],int left,int right){
    int mid ;
    if(left<right){
        mid = partition(a,left,right);
        quicksort(a,left,mid-1);
        quicksort(a,mid+1,right);
    }
}

int main()
{
    int a[] = {28,13,37,5,46};
    int length = sizeof(a)/sizeof(a[0]);
    
    quicksort(a,0,length-1);
    
    for(int i=0;i<length;i++){
        printf("%d,", a[i]);
    }
    return 0;
}
