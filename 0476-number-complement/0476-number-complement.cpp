class Solution {
public:
    int findComplement(int num) {
        if(num == 0)return 1;
        int i = 0;
        while(pow(2,i) <= num){
            i++;
        }
        return pow(2,i) - num - 1;
    }
};