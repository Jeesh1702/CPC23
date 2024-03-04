class Solution {
public:

    void fun(int &ans, vector<vector<int>>& grid, int i, int j, int m, int n){
        if(i>=m || j>=n || i<0 || j<0 || grid[i][j] == 0){
            ans++;
            return;
        }
        if(grid[i][j] == -1){
            ans--;
            return;
        }
        ans--;
        grid[i][j] = -1;
        ans += 4;
        fun(ans,grid,i+1,j,m,n);
        fun(ans,grid,i-1,j,m,n);
        fun(ans,grid,i,j+1,m,n);
        fun(ans,grid,i,j-1,m,n);
    }

    int islandPerimeter(vector<vector<int>>& grid) {
        int a=-1,b=-1;
        int m = grid.size(), n = grid[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                    a = i;
                    b = j;
                    break;    
                }
            }
            if(a != -1)break;
        }
        int ans = 1;
        fun(ans,grid,a,b,m,n);
        return ans/2;
    }
};