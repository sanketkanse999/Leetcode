class Solution {
    public int evalRPN(String[] tokens) {

        Stack<Integer> ans = new Stack<>();

        for(String token : tokens){

         if(token.equals("+")){


            int a = ans.pop();
            int b = ans.pop();

            ans.push(b+a);

         }else if(token.equals("-")){

            int a = ans.pop();
            int b = ans.pop();

            ans.push(b-a);

         }else if(token.equals("*")){
             
             int a = ans.pop();
             int b = ans.pop();

             ans.push(b*a);
         }else if(token.equals("/")){
             int a = ans.pop();
             int b = ans.pop();

             ans.push(b/a);
         }else{
        

          ans.push(Integer.parseInt(token));
         }

        }

       return ans.pop();
    }
}