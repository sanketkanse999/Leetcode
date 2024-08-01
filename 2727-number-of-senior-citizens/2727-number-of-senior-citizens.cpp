class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n = details.size();
        int count=0;
        for(int i=0;i<n;i++){
            string str = details[i];
            int x = stoi(str.substr(11,2));
            if(x>60){
                count++;
            }
        }
        return count;
    }
};