#include<bits/stdc++.h>
class Solution{
    public:
    vector<int> twoRepeating(vector<int> arr,int n){
        vector<int> ans;
        for(int i=0;i<n+2;i++){
            if(arr[abs(arr[i])] < 0)ans.push_back(abs(arr[i]));
            arr[abs(arr[i])] = arr[abs(arr[i])] * -1;
        }
    }
    return ans;
}