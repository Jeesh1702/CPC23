class Solution {
public:
    void fun(vector<vector<char>>& grid, int sr, int sc){
        int m = grid.size(), n = grid[0].size();
        queue<vector<int>> q;
        q.push({sr,sc});
        grid[sr][sc] = 'z';
        while(!q.empty()){
            int r = q.front()[0] , c = q.front()[1];
            q.pop();
            if(r-1>=0 && grid[r-1][c] == 'O' )q.push({r-1,c}),grid[r-1][c] = 'z';
            if(r+1<m && grid[r+1][c] == 'O'  )q.push({r+1,c}),grid[r+1][c] = 'z';
            if(c-1>=0 && grid[r][c-1] == 'O')q.push({r,c-1}),grid[r][c-1] = 'z';
            if(c+1<n && grid[r][c+1] == 'O' )q.push({r,c+1}),grid[r][c+1] = 'z';  
        }
    }
    void solve(vector<vector<char>>& grid) {
        int m = grid.size(), n = grid[0].size(), ans = 0;
        for(int i=0;i<n;i++){
            if(grid[0][i] == 'O'){
                fun(grid,0,i);
            }
            if(grid[m-1][i] == 'O'){
                fun(grid,m-1,i);
            }
        }
        for(int i=1;i<m-1;i++){
            if(grid[i][0] == 'O'){
                fun(grid,i,0);
            }
            if(grid[i][n-1] == 'O'){
                fun(grid,i,n-1);
            }
        }

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j] == 'z'){
                   grid[i][j] = 'O';
                }
                else grid[i][j] = 'X';
            }
        }
    }
};