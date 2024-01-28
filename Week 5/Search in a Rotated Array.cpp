#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    int search(int A[], int l, int r, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        while(l<=r){
            int m = (l+r+1)/2;
            if(A[m] == key)return m;
            if(A[m] <= A[r]){
                if(key > A[m] && key<=A[r])l=m+1;
                else r=m-1;
            }
            else if(A[l] <= A[m]){
                if(key < A[m] && key>=A[l])r=m-1;
                else l = m+1;
            }
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
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}