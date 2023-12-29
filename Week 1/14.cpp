void rearrange(int arr[], int n) {
	    // code here
	    vector<int> pos,neg;
	    for(int i=0;i<n;i++){
	        if(arr[i] >= 0)pos.push_back(arr[i]);
	        else neg.push_back(arr[i]);
	    }
	    int i=0,j = 0;
	    int ind=0;
	    int chg = 0;
	    while(i<pos.size() && j<neg.size()){
	        if(chg == 0){
	            arr[ind] = pos[i];
	            chg = 1;
	            ind++;
	            i++;
	        }
	        else{
	            arr[ind] = neg[j];
	            chg = 0;
	            ind++;
	            j++;
	        }
	    }
	    while(i<pos.size()){
            arr[ind] = pos[i];
            ind++;
            i++;
	    }
	    while(j<neg.size()){
            arr[ind] = neg[j];
            ind++;
            j++;
	    }
	}