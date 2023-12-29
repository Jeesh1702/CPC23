#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int minRow(int n, int m, vector<vector<int>> A) {
        // code here
        int ans = 0;
        int ind = 0;
        for(int i=0;i<n;i++){
            sort(A[i].begin(),A[i].end());
            if(A[i][ind] == 1)continue;
            while(A[i][ind] == 0 && ind<m)ind++;
            ans = i;
            // cout << ind << " " << i << endl;
            if(ind == m)return i+1;
        }
        return ans+1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M;
        cin >> N >> M;
        vector<vector<int>> A(N, vector<int>(M));
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        Solution ob;
        cout << ob.minRow(N, M, A) << "\n";
    }
}
// } Driver Code Ends