#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int ceil(int A[], int l, int r, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        while(l<r){
            int m = (l+r)/2;
            if(A[m] == key)return A[m];
            if(A[m] > key)r = m;
            else l = m+1;
        }
        return -1;
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.ceil(A, 0, n - 1, key) << endl;
    }
return 0;
}