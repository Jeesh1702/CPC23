#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	vector<int> printUnsorted(int arr[], int n) {
	    vector<int> ans;
	    int i=1;
	    while(i<n && arr[i]>=arr[i-1])i++;
	    if(i==n)return {0,0};
	    int l=i-1;
	    i = n-2;
	    while(i>=0 && arr[i]<=arr[i+1])i--;
	    int r = i+1;
	    int mn=arr[l],mx=arr[l];
	    for(int i=l;i<=r;i++){
	        mn = min(mn,arr[i]);
	        mx = max(mx,arr[i]);
	    }
	    for(int i=0;i<n;i++){
	        if(arr[i]>mn){
	            ans.push_back(i);
	            break;
	        }
	    }
	    for(int i=n-1;i>=0;i--){
	        if(arr[i]<mx){
	            ans.push_back(i);
	            break;
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.printUnsorted(arr, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}
