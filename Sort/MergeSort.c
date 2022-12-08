#include <stdio.h>

void swap(int a[],int c,int d){
	int temp;
	temp=a[c];
	a[c]=a[d];
	a[d]=temp;
}

void merge(int a[],int left,int mid,int right){
    while(left<right){
        if(left==mid+1) mid++;
        if(a[left]>a[mid+1]){
            swap(a, left ,mid+1);
        }
        left++;
    }
}

void mergesort(int a[],int left,int right){
    if(left<right){
        int mid = (left+right)/2;
        mergesort(a,left,mid);
        mergesort(a,mid+1,right);
        merge(a,left,mid,right);
    }
}

int main()
{
    int a[] = {37,15,29,7,87,43,69,17,71,59};
    int length = sizeof(a)/sizeof(a[0]);
    
    mergesort(a,0,length-1);
    
    for(int i=0;i<length;i++){
        printf("%d,", a[i]);
    }
    return 0;
}
