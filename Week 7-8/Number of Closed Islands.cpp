class Solution {
public:
    int fun(vector<vector<int>>& grid, int sr, int sc){
        int m = grid.size(), n = grid[0].size(),ans=1;
        queue<vector<int>> q;
        q.push({sr,sc});
        grid[sr][sc] = 1;
        while(!q.empty()){
            int r = q.front()[0] , c = q.front()[1];
            if(r==0 || r==m-1 || c==0 || c==n-1)ans=0;
            q.pop();
            if(r-1>=0 && !grid[r-1][c] )q.push({r-1,c}),grid[r-1][c] = 1;
            if(r+1<m && !grid[r+1][c]  )q.push({r+1,c}),grid[r+1][c] = 1;
            if(c-1>=0 && !grid[r][c-1])q.push({r,c-1}),grid[r][c-1] = 1;
            if(c+1<n && !grid[r][c+1] )q.push({r,c+1}),grid[r][c+1] = 1;  
        }
        return ans;
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(!grid[i][j]){
                   ans += fun(grid,i,j);
                }
            }
        }
        return ans;
    }
};
