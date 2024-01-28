class TimeMap {
public:
    unordered_map<string,vector<pair<int,string>>> m;
    TimeMap() {
        m.clear();
    }
    
    void set(string key, string value, int timestamp) {
        m[key].push_back({timestamp,value});
    }
    
    string get(string key, int ts) {
        pair<int,string> t = {ts,""};
        int a = lower_bound(m[key].begin(),m[key].end(),t) - m[key].begin();
        if(a == m[key].size() || m[key][a].first > ts){
            if(a == 0)return "";
            return m[key][a-1].second;
        }
        return m[key][a].second;
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */