class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l=0,r=-1,n=nums.size();
        while(l<n){
            while(l<n && nums[l] != 0)l++;
            if(l>=n)return;
            if(r == -1)r=l+1;
            while(r<n && nums[r] == 0)r++;
            if(r>=n)return;
            nums[l] = nums[r];
            nums[r] = 0;
            r++;
            l++;
        }
    }
};