class Solution {
    public int maxProduct(int[] nums) {

        int high = Integer.MIN_VALUE;
        int second_high = Integer.MIN_VALUE;

        for(int x : nums){
            if(x > high){
                
                second_high = high ;
                high = x;
            }
            else if(x > second_high){
                second_high = x;
            }
        }

        return ((high-1)*(second_high-1));
        
    }
}