class Solution{
  public:
    int missingNumber(vector<int>& array, int n) {
        // Your code goes here
        int xr = 0;
        for(int i=0;i<n-1;i++){
            xr = xr ^ array[i];
            xr = xr^(i+1);
        }
        xr = xr^n;
        return xr;
    }
};