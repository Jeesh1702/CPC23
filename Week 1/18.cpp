class Solution {
public:
    int titleToNumber(string s) {
        int ans = 0;
        for(int i=0;i<s.length();i++){
            ans += pow(26,i)*(int(s[s.length()-1-i]-64));
        }
        return ans;
    }
};