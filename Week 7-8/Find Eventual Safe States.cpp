class Solution {
public: 
    bool fun(vector<int> &dp, vector<vector<int>>& graph, int ind){
        if(dp[ind] >= 0)return dp[ind];
        if(dp[ind] == -1)return false;
        dp[ind] = -1;
        bool temp = true;
        for(auto &i : graph[ind]){
            temp = temp&&fun(dp,graph,i);
        }
        return dp[ind] = temp;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>ans , dp(n,-2);
        for(int i=0;i<graph.size();i++){
            if(fun(dp,graph,i))ans.push_back(i);
        }
        return ans;
    }
};