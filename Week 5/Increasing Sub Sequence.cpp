#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int maxLength(string s)
    {
        // code here
        vector<int> dp(s.size(),1);
        int ans = 1;
        for(int i=1;i<s.size();i++){
            for(int j=0;j<i;j++){
                if(s[j]<s[i])dp[i] = max(dp[j]+1,dp[i]);
            }
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};



//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin>>S;
        Solution ob;
        cout << ob.maxLength(S) << endl;
    }
    return 0; 
}