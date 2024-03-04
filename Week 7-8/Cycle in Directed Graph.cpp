int Solution::solve(int V, vector<vector<int> > &ed) {
    vector<vector<int>> adj(V);
    vector<int> in(V,0);
    for(int i=0;i<ed.size();i++){
        in[ed[i][1]-1]++;
        adj[ed[i][0]-1].push_back(ed[i][1]-1);
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
    if(cnt == V)return 0;
    return 1;
    
}
