#include <stdio.h>

void function(int n,int a[3][3]){
    int max[3]={0,0,0};
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(max[i]<a[i][j]) max[i] = a[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        int count = 0;
        int temp = max[i];
        int temparray[3]={0,0,0};
        for(int j=0;j<n;j++){
            if(temp>max[j]) count++; 
        }
        for(int j=0;j<n;j++){
            temparray[j] = a[i][j];
            a[i][j] = a[count][j];
            a[count][j] = temparray[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n = 3;
    int a[3][3] = {{3, 22, 84}, {5, 27, 14}, {33, 9, 4}};
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         printf("%d ",a[i][j]);
    //     }
    //     printf("\n");
    // }
    function(n,a);

    return 0;
}
