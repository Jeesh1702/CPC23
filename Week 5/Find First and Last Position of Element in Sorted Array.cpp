class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        vector<int> ans(2);
        int n = arr.size();
        if(n == 0)return {-1,-1};
        int l=0,r=n-1;
	    while(l<r){
	        int m = (l+r)/2;
	        if(arr[m] < x)l=m+1;
	        else r = m;
	    }
	    ans[0] = l;
	    if(arr[l]!=x)return {-1,-1};
	    l = 0, r = n-1;
	    while(l<r){
	        int m = (l+r+1)/2;
	        if(arr[m] <= x)l=m;
	        else r=m-1;
	    }
        ans[1] = l;
	    return ans;
	}
};