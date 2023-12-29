class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx = nums[0];
        int cur = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                cur += nums[i];
            }
            else{
                cur = nums[i];
            }
            mx = max(mx,cur);
        }
        return mx;
    }
};