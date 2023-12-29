class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int l=nums.size()-1,r = nums.size()-1;
        long long cur = 1;
        int ans = 0;
        while(l>=0){
            cur *= nums[l];
            if(cur<k){
                ans += (r-l+1);
            }
            else{
                while(r>=l && cur>=k){
                    cur/=nums[r];
                    r--;
                }
                ans += (r-l+1);
            }
            l--;
        }
        // if(r!=(nums.size()-1))ans += (r+1);
        return ans;
    }
};