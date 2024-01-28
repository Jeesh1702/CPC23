#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    // code here
	    int l=0,r=n-1;
	    while(l<r){
            int m = (l+r+1)/2;
            if((m==0 || arr[m-1]<arr[m]) && (m+1>=n || arr[m+1]<arr[m]))return arr[m];
            else if(m+1<n && arr[m+1]>arr[m])l=m+1;
            else r=m-1;
        }
        return arr[l];
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}