//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        static bool compare(int a, int b){
            return abs(a)<abs(b);
        }
        int closestToZero(int arr[], int n)
        {
            // your code here 
            int ans = INT_MAX;
            sort(arr,arr+n,compare);
            for(int i=1;i<n;i++){
                if(abs(ans) > abs(arr[i]+arr[i-1]))ans = (arr[i]+arr[i-1]);
                if(abs(ans) == abs(arr[i]+arr[i-1]) && (arr[i]+arr[i-1])>=0)ans = (arr[i]+arr[i-1]);
            }
            return ans;
        }
};

//{ Driver Code Starts.
int main ()
{
    int t; 
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        Solution ob;
        cout << ob.closestToZero(arr, n) << endl;
    }
}