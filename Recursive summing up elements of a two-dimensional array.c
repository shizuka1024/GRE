#include <stdio.h>
// mSize = Column Size

int sum(int a[2][2],int row,int col, int mSize){
    if(row == 0 && col == 0){
        return a[row][col];
    }
    if(col == 0){
        return a[row][col] + arraySum(a, row - 1, mSize, mSize);
    }else {
        return a[row][col] + arraySum(a, row, col - 1, mSize);
    }
    
}

int main()
{
    int a[2][2] = {
        {3,8},
        {9,13}
    };
    int s = sum(a,1,1,1);
    printf("%d",s);

    return 0;
}


// End<-1 | 2 
//      ------
//      3 | 4 <- start
// https://stackoverflow.com/questions/25969505/recursive-summing-up-elements-of-a-two-dimensional-array
