vector<int> singleNumber(vector<int> nums) 
    {
        // Code here.
        int xr = 0;
        for(int i=0;i<nums.size();i++){
            xr = xr^nums[i];
        }
        int lsb=1;
        while((lsb&xr) == 0){
            lsb = lsb<<1;
        }
        int xr1=0, xr2=0;
        for(auto &i : nums){
            if(i&lsb){
                xr1 = xr1^i;
            }
            else{
                xr2 = xr2^i;
            }
        }
        if(xr1 < xr2)return {xr1,xr2};
        return {xr2,xr1};
        
    }