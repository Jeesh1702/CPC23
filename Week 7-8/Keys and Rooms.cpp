class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size(),c=1;
        vector<int> vis(n,0);
        queue<vector<int>> q;
        vis[0] = 1;
        q.push({0});
        while(!q.front().empty()){
            vector<int> temp;
            for(auto &i : q.front()){
                for(auto &j : rooms[i]){
                    if(!vis[j]){
                        temp.push_back(j);
                        vis[j] = 1;
                        c++;
                        if(c == n)return true;
                    }
                }
            }
            q.push(temp);
            q.pop();
        }
        return false;
    }
};