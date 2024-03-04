class Solution {
public:

    int fun(vector<bool> &vis,vector<int> &in){
        for(int i=0;i<in.size();i++){
            if(vis[i])continue;
            if(in[i] == 0)return i;
        }
        return 0;
    }
    vector<int> loudAndRich(vector<vector<int>>& richer, vector<int>& quiet) {
        int n=quiet.size();
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            ans[i] = i;
        }
        vector<int> in(n,0);
        vector<vector<int>> adj(n);
        for(auto &i : richer){
            adj[i[0]].push_back(i[1]);
            in[i[1]]++;
        }
        vector<bool> vis(n,false);
        for(int i=0;i<n;i++){
            int a = fun(vis,in);
            cout << a << endl;
            vis[a] = true;
            for(auto &j : adj[a]){
                if(quiet[ans[a]] < quiet[ans[j]])ans[j] = ans[a];
                in[j]--;
            }
        }
        return ans;
    }
};