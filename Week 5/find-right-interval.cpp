class Solution {
public:
    //   1 3 4 5 8 11 16 27
    int search(vector<vector<int>>& inter,int a){
        int l=0,r=inter.size()-1;
        int m;
        while(l<r){
           m = (l+r)/2;
           if(inter[m][0] == a)return inter[m][0];
           if(a > inter[m][0])l=m+1;
           else r=m-1;
        }
        if(l == inter.size()-1) return (a>inter[l][0])? INT_MIN : inter[l][0];
        return (a>inter[l][0])? inter[l+1][0] : inter[l][0];
    }
    vector<int> findRightInterval(vector<vector<int>>& inter) {
        unordered_map<int,int> m;
        for(int i=0;i<inter.size();i++){
            m[inter[i][0]] = i;
        }
        vector<vector<int>> it = inter;
        sort(inter.begin(),inter.end());
        vector<int> ans;
        m[INT_MIN] = -1;
        for(int i=0;i<it.size();i++){
            ans.push_back(m[search(inter,it[i][1])]);
        }
        // cout << m[-1];
        return ans;

        // cout << search(inter,99);
        // return {};
    }
};