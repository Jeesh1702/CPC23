void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i=0,j=-1;
	    while(i<n){
	        while(i<n && arr[i]!=0)i++;
	        if(i == n)return;
	        if(j == -1)j = i+1;
	        while(j<n && arr[j]==0)j++;
	        if(j == n)return;
	        arr[i] = arr[j];
	        arr[j] = 0;
	        j++;
	        i++;
	    }
	}