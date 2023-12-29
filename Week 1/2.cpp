class Solution{
    public:
    int findSingle(int N, int arr[]){
        // code here
        int xr = 0;
        for(int i=0;i<N;i++){
            xr = xr^arr[i];
        }
        return xr;
    }
};