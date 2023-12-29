#include <bits/stdc++.h>

using namespace std;

bool isSubSequence(vector<int> &v1, vector<int> &v2, int n, int m) {

    if (m == 0) return true;
    if (n == 0) return false;

    if (v1[n - 1] == v2[m - 1]) return isSubSequence(v1, v2, n - 1, m - 1);

    return isSubSequence(v1, v2, n - 1, m);
}


// } Driver Code Ends
/*The function returns a vector containing the
increasing sub-sequence of length 3 if present
else returns an empty vector */
class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int n) {
        // Your code here
        int prev,cur=0,l=INT_MAX,r=INT_MAX,cur_r;
        for(int i=0;i<n;i++){
            if(arr[i] < l){
                l = arr[i];
                prev = cur;
                cur = i;
            }
            else if(arr[i] < r && arr[i]>l){
                r = arr[i];
                cur_r = i;
            }
            else if(arr[i] > r){
                if(cur_r > cur){
                    // cout << arr[cur]<<r<<arr[i];
                    return {arr[cur],r,arr[i]};
                }
                else{
                    // cout << arr[prev]<<r<<arr[i];
                    return {arr[prev],r,arr[i]};
                }
            }
        }
        return {};
    }
};

//{ Driver Code Starts.

// Driver program to test above function
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        auto res = obj.find3Numbers(a, n);

        // wrong format output
        if (!res.empty() and res.size() != 3) {
            cout << -1 << "\n";
        }

        if (res.empty()) {
            cout << 0 << "\n";
        } else if ((res[0] < res[1] and res[1] < res[2]) and
                   isSubSequence(a, res, n, res.size())) {
            cout << 1 << "\n";
        } else {
            cout << -1 << "\n";
        }
    }

    return 0;
}