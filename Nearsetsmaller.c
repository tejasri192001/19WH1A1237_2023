int* prevSmaller(int* A, int n1, int *len1) {
    *len1=n1;
    int *stack=(int *)malloc(*len1*sizeof(int));
    int i=1,j;
    stack[0]=-1;
    for(i=1;i<n1;i++)
    {
        if(A[i-1]<A[i])
        stack[i]=A[i-1];
        else
        {
            j=i-1;
            while(j>0 && stack[j]>=A[i])
            j--;
            stack[i]=stack[j];
        }
    }
    return stack;    
}
