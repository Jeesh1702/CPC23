class Solution {
public:
    int getparent(int a,vector<int> &m){
        if(m[a] == -1)return a;
        return getparent(m[a],m);
    }
    void setparent(int a,int b, vector<int> &m){
        int u=getparent(a,m),v=getparent(b,m);
        if(u != v)m[v] = u;
    }
    int makeConnected(int n, vector<vector<int>>& con) {
        if(con.size()<n-1)return -1;
        vector<int> m(n,-1);
        for(int i=0;i<con.size();i++){
            setparent(con[i][0],con[i][1],m);
        }
        int c = 0;
        for(int i=0;i<n;i++){
            if(m[i] == -1)c++;
        }
        return c-1;
    }
};