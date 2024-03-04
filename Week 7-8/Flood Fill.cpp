class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& img, int sr, int sc, int color) {
        int m = img.size(), n = img[0].size();
        queue<vector<int>> q;
        q.push({sr,sc});
        int col = img[sr][sc];
        vector<vector<int>> vis(m,vector<int>(n,0));
        while(!q.empty()){
            int r = q.front()[0] , c = q.front()[1];
            q.pop();
            // if(img[r][c] != col)
            if(r-1>=0 && col == img[r-1][c] && !vis[r-1][c])q.push({r-1,c}),vis[r-1][c] = 1;
            if(r+1<m && col == img[r+1][c] && !vis[r+1][c])q.push({r+1,c}),vis[r+1][c] = 1;
            if(c-1>=0 && img[r][c-1] == col && !vis[r][c-1])q.push({r,c-1}),vis[r][c-1] = 1;
            if(c+1<n && img[r][c+1] == col && !vis[r][c+1])q.push({r,c+1}),vis[r][c+1] = 1;  
            img[r][c] = color;          
            // cout << r << c<< endl;
        }
        return img;
    }
};