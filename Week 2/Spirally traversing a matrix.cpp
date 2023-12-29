#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        int rot=0; 
        int top=0,bottom=matrix.size()-1,left=0,right=matrix[0].size()-1;
        vector<int> ans;
        while(top<=bottom && left<=right){
            if(rot==0){
                int i=left;
                while(i<=right){
                    ans.push_back(matrix[top][i++]);
                }
                top++;
                rot=1;
            }
            else if(rot==1){
                int i=top;
                while(i<=bottom){
                    ans.push_back(matrix[i++][right]);
                }
                right--;
                rot=2;
            }
            else if(rot==2){
                int i=right;
                while(i>=left){
                    ans.push_back(matrix[bottom][i--]);
                }
                bottom--;
                rot=3;
            }
            else if(rot==3){
                int i=bottom;
                while(i>=top){
                    ans.push_back(matrix[i--][left]);
                }
                left++;
                rot=0;
            }
        }
        // cout << top << left << right << bottom;
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}