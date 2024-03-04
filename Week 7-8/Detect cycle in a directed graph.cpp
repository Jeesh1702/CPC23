#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<int> in(V,0);
        for(int i=0;i<V;i++){
            for(auto &j : adj[i]){
                in[j]++;
            }
        }
        vector<int> z;
        int cnt = 0;
        for(int i=0;i<V;i++){
            if(in[i] == 0){
                z.push_back(i);
                cnt++;
                // cout << i;
            }
        }
        while(!z.empty()){
            int i = z.back();
            z.pop_back();
            for(auto &j : adj[i]){
                in[j]--;
                if(in[j] == 0){
                    z.push_back(j);
                    cnt++;
                }
            }
        }
        if(cnt == V)return false;
        return true;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}