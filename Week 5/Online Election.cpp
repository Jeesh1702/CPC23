class TopVotedCandidate {
public:
    vector<int> arr;
    vector<int> time;
    TopVotedCandidate(vector<int>& persons, vector<int>& times) {
        arr.clear();
        unordered_map<int,int> m;
        time = times;
        int mx = -1;
        for(int i=0;i<times.size();i++){
            m[persons[i]]++;
            if(mx==-1 || m[persons[i]] >= m[mx]){
                mx = persons[i];
            }
            arr.push_back(mx);
        }
    }
    
    int q(int t) {
        int i = lower_bound(time.begin(),time.end(),t)-time.begin();
        if(i!=time.size() && time[i] == t)return arr[i];
        return arr[i-1];
    }
};