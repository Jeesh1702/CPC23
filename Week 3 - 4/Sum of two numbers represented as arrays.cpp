#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int n=a.size(),m=b.size(),carry=0;
	    vector<int> ans;
	    for(int i=1;i<=max(m,n);i++){
	        int temp;
	        if(i>a.size()){
	            temp = b[m-i]+carry;
	        }
	        else if(i>b.size()){
	            temp = a[n-i]+carry;
	        }
	        else{
	            temp = a[n-i]+b[m-i]+carry;
	        }
	        ans.push_back(temp%10);
	        carry = (temp)/10;
	    }
	    if(carry)ans.push_back(carry);
	    reverse(ans.begin(),ans.end());
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}