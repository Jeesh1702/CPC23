class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        if(nums.size() <= 3)return {};
        set<vector<int>> s;
        vector<vector<int>> output;
        for (int i = 0; i < nums.size()-3; i++){
            for(int j = i+1; j < nums.size()-2; j++){
                int k = j + 1;
                int l = nums.size() - 1;
                while(k<l){
                    long long int sum = nums[i];
                    sum += nums[j];
                    sum += nums[k];
                    sum += nums[l];
                    if (sum == target) {
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    } 
                    else if (sum < target)k++;
                    else l--;
                }
            }
        }
        for(auto te : s){
            output.push_back(te);
        }
            
        return output;
    }
};