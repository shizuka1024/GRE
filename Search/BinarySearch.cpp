#include <stdio.h>

int b[]={1,5,9,18,25,36,42,74,89,97};

int binarysearch(int start,int end,int x){
    int mid;
    if(start>end){
        return -1;
    }else{
        mid = (start+end)/2;
        if(x==b[mid]){
            return mid;
        }else if(x>b[mid]){
            return binarysearch(mid+1,end,x);
        }else{
            return binarysearch(0,mid-1,x);
        }
    }
}

int main()
{
    int length = sizeof(b)/sizeof(b[0]);
    int x=18;
    
    int addr=binarysearch(0,length-1,x);
    printf("%d is at %d'th",x,addr+1);

    return 0;
}
