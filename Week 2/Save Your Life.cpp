#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    string maxSum(string w,char x[], int b[],int n){
          // code here 
        unordered_map<char,int> m;
        for(int i=0;i<n;i++){
            m[x[i]] = b[i];   
        }
        int i=0;
        int mx = INT_MIN, cur = 0;
        string ans = "";
        string c = "";
        for(int i=0;i<w.length();i++){
            if(m.find(w[i]) != m.end()){
                cur += m[w[i]];
                c += w[i];
            }
            else{
                cur += int(w[i]);
                c += w[i];
            }
            // mx = max(cur,mx);
            // cout << cur << " " << c << endl; 
            if(mx <= cur){
                ans = c;
                mx = cur;
            }
            if(cur<0){
                cur = 0;
                c = "";
            }
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
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}