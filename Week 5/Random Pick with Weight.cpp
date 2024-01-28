class Solution {
public:
    vector<pair<int,int>> a;
    int mx;
    Solution(vector<int>& w) {
        int cur = 0;
        for(int i=0;i<w.size();i++){
            cur += w[i];
            a.push_back({cur,i});
        }
        mx = cur;
    }
    
    int pickIndex() {
        int r = rand()%mx + 1;
        pair<int,int> t={r,0};
        int num = lower_bound(a.begin(),a.end(),t) - a.begin();
        return a[num].second;
    }
};