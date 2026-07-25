class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {

        int large = candies[0];

        for(int i=0; i< candies.length ;i++){
           
            if(candies[i]> large){
                large = candies[i];
            }
        }

        List<Boolean>  ans = new ArrayList<>();

        for(int i=0; i<candies.length;i++){
            if(candies[i]+extraCandies >= large){
                ans.add(true);
            }else{
                ans.add(false);
            }
        }

        return ans;
    }
}