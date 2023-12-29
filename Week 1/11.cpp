int findSum(int A[], int N)
    {
    	//code here.
    	int mn = A[0], mx = A[0];
    	for(int i=1;i<N;i++){
    	    mn = min(mn,A[i]);
    	    mx = max(mx,A[i]);
    	}
    	return mn+mx;
    }