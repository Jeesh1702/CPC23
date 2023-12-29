#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int N, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> ans;
		for(int i=0;i<N;i++){
		    int j=0,k=i;
		    while(j<N && k>=0){
		        ans.push_back(A[j][k]);
		        j++;
		        k--;
		    }
		}
		for(int i=1;i<N;i++){
		    int j=i,k=N-1;
		    while(j<N && k>=0){
		        ans.push_back(A[j][k]);
		        j++;
		        k--;
		    }
		}
		return ans;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}