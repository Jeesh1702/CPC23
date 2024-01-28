#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    int findMidSum(int ar1[], int ar2[], int n) {
        int i=0,j=0;
        while(i<n && j<n && i+j<n-1){
            if(ar1[i]>=ar2[j])j++;
            else i++;
        }
        // if(i==n)return ar2[0]+ar2[1];
        // if(j==n)return ar1[0]+ar1[1];
        // cout << i << " " << j << endl;
        if(ar1[i] == ar2[j])return ar1[i]+ar2[j];
        else if(ar1[i]>ar2[j]){
            if(j==n-1)return ar2[j]+ar1[i];
            else return ar2[j]+min(ar2[j+1],ar1[i]);
        }
        else{
            if(i==n-1)return ar2[j]+ar1[i];
            else return ar1[i]+min(ar1[i+1],ar2[j]);
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int ar1[n], ar2[n];
        for (i = 0; i < n; i++) {
            cin >> ar1[i];
        }
        for (i = 0; i < n; i++) {
            cin >> ar2[i];
        }
        Solution ob;
        auto ans = ob.findMidSum(ar1, ar2, n);
        cout << ans << "\n";
    }
    return 0;
}