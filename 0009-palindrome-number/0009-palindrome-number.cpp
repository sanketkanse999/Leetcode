class Solution {
public:
    bool isPalindrome(int x) {
        long y=0;
        if(x<0){
            return false;
        }
        long c=x;
        while(c!=0){
            y=y*10;
            y=(c%10)+y;
            c=c/10;
        }
        if(y==x){
            return true;
        }
        return false;
    }
};