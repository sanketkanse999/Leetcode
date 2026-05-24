class Solution {
    public int[] shuffle(int[] nums, int n) {
        
        int len = n*2;

        int[] ans = new int[len];
        for(int i=0;i<n;i++){
            ans[2*i]=nums[i];
            ans[2*i+1]=nums[n+i];
        }
        return ans;

    }
}