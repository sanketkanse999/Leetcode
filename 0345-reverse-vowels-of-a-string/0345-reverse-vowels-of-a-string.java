class Solution {
    public String reverseVowels(String s) {

        char[] arr = s.toCharArray();

        int left = 0;
        int right = arr.length-1;

        while(left < right){
            while(!isVowels(arr[left])   &&  left < right){
                left++;
            }
            while(!isVowels(arr[right])  && left < right){
                right--;
            }

            char temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;

        }


        return new String(arr);

    }

        
    private boolean isVowels(char c){
            c = Character.toLowerCase(c);

            return (c == 'a' || c== 'e' || c=='i' || c=='o' || c=='u');
        }
    
}