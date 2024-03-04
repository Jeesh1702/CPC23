class Solution {
public:
    bool fun(vector<int> &dp,vector<vector<int>> &arr, int ind){
        if(dp[ind] >= 0) return dp[ind];
        if(dp[ind] == -1)return dp[ind] = 0;
        dp[ind] = -1;
        bool temp = true;
        for(auto &i : arr[ind]){
            temp = temp&&fun(dp,arr,i);
            if(!temp)break;
        }
        return dp[ind] = temp;
    }
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<vector<int>> arr(n);
        for(int i=0;i<pre.size();i++){
            arr[pre[i][0]].push_back(pre[i][1]);
        }
        vector<int> dp(n,-2);
        bool temp = true;
        for(int i=0;i<n;i++){
            temp = temp&&fun(dp,arr,i);
            if(!temp)break;
        }
        return temp;
    }
};