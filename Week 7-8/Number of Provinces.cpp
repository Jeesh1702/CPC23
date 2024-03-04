class Solution {
public:
    
    int getparent(int a,vector<int>m){
        if(m[a]==-1)return a;
        return getparent(m[a],m);
    }
    void setparent(int a,int b, vector<int> &m){
        int u = getparent(a,m),v = getparent(b,m);
        if(u!=v)m[v]=u;
        
    }
    int findCircleNum(vector<vector<int>>& is) {
        int n = is.size();
        vector<int> m(n,-1);
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(is[i][j]==1){
                    setparent(i,j,m);
                }
            }
        }
        int ans=0;
        for(auto &i : m){
            if(i == -1)ans++;
        }
        return ans;
    }
};

