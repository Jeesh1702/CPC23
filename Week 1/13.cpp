void segregateEvenOdd(int arr[], int n) {
	    // code here
	    vector<int>e,o;
	    sort(arr,arr+n);
	    for(int i=0;i<n;i++){
	        if(arr[i]%2)o.push_back(arr[i]);
	        else e.push_back(arr[i]);
	    }
	    int j = 0;
	    for(int i=0;i<e.size();i++){
	        arr[j] = e[i];
	        j++;
	    }
	    for(int i=0;i<o.size();i++){
	        arr[j] = o[i];
	        j++;
	    }
	}