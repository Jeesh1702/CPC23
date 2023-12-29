class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int temp = x,rev=0;
        while(temp){
            rev = (rev*10) + temp%10;
            temp = temp/10;
        }
        if(rev==x){
            return true;
        }
        return false;
    }
};