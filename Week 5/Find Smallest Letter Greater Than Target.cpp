class Solution {
public:
    char nextGreatestLetter(vector<char>& let, char tt) {
        int l=0,r=let.size()-1,m;
        while(l<r){
            m=(l+r)/2;
            if(let[m]<=tt){
                l=m+1;
            }
            else{
                r=m;
            }
            cout << l << r << endl;
        }
        // if(l>=let.size())l=0;
        if(let[l] > tt)return let[l];
        return let[0];
    }
};