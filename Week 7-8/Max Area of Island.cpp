class Solution {
public:
    int fun(vector<vector<int>>& grid, int sr, int sc){
        int m = grid.size(), n = grid[0].size(),ans=0;
        queue<vector<int>> q;
        q.push({sr,sc});
        grid[sr][sc] = 0;
        while(!q.empty()){
            ans++;
            int r = q.front()[0] , c = q.front()[1];
            q.pop();
            if(r-1>=0 && grid[r-1][c] )q.push({r-1,c}),grid[r-1][c] = 0;
            if(r+1<m && grid[r+1][c]  )q.push({r+1,c}),grid[r+1][c] = 0;
            if(c-1>=0 && grid[r][c-1])q.push({r,c-1}),grid[r][c-1] = 0;
            if(c+1<n && grid[r][c+1] )q.push({r,c+1}),grid[r][c+1] = 0;  
        }
        return ans;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]){
                   ans = max(ans,fun(grid,i,j));
                }
            }
        }
        return ans;
    }
};