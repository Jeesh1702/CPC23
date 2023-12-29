class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int cur = 0;
        int l = 0, r = 0;
        vector<int> arr;
        while(l<nums.size()){
            if(nums[l]%2){
                arr.push_back(cur);
                cur = 0;
            }
            else{
                cur++;
            }
            l++;
        }
        arr.push_back(cur);
        cur = 0;
        l = 0;
        r = k;
        for(int i=0;i<arr.size();i++)cout << arr[i] << " ";
        while(r<arr.size()){
            cur += ((arr[l]+1)*(arr[r]+1));
            l++;
            r++;
        }
        return cur;
    }
};