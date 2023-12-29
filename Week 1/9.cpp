vector<long long int> twoOddNum(long long int nums[], long long int N)  
    {
        // code here
        int xr = 0;
        for(int i=0;i<N;i++){
            xr = xr^nums[i];
        }
        int lsb=1;
        while((lsb&xr) == 0){
            lsb = lsb<<1;
        }
        int xr1=0, xr2=0;
        for(int i=0;i<N;i++){
            if(nums[i]&lsb){
                xr1 = xr1^nums[i];
            }
            else{
                xr2 = xr2^nums[i];
            }
        }
        if(xr1 > xr2)return {xr1,xr2};
        return {xr2,xr1};
    }