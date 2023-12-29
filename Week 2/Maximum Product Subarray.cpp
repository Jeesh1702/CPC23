#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(vector<int> arr, int n) {
	    // code here
	    long long mxtil=arr[0],mntil=arr[0],ans = arr[0];
	    for(int i=1;i<n;i++){
	        long long temp = mxtil;
            mxtil = max({mxtil*arr[i],(long long)arr[i],mntil*arr[i]});
            mntil = min({mntil*arr[i],(long long)arr[i],temp*arr[i]});
            // cout << mxtil << " " << mntil << endl;
            ans = max(ans,mxtil);
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        vector<int> arr(n);
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.maxProduct(arr, n);
        cout << ans << "\n";
    }
    return 0;
}