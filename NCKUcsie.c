// Use any program language you prefer to develop a function 
// that inserts a positive number E 
// into to a sequence of ordered numbers (size is equal to i), 
// which are in ascending order, 
// in a way that the resulting sequence of i+1 is also ordered.

void(int[]A, int i, int E){
    int j;
    for(j=i-1;j>=0 && E<A[j];j--){
        A[j+1] = A[j];
    }
    a[j+1] = E;
}