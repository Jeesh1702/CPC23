#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
        // Your code here
        if(s == 0){
            for(int i=0;i<n;i++){
                if(arr[i] == 0)return {i+1,i+1};
            }
            return {-1};
        }
        int l=0,r=0;
        long long cur = 0;
        while(r<n || (l<n && cur>=s)){
            if(cur == s){
                return {l+1,r};
            }
            else if(cur < s){
                cur+=arr[r];
                r++;
            }  
            else{
                cur-=arr[l];
                l++;
            }
        }
        return {-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;