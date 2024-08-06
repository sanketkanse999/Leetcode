class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int> map;
        vector<pair<int,char>>mp;
        
        for(auto it:word){
            map[it]++;
        }
        for(auto it:map){
            mp.push_back({it.second,it.first});
        }
        sort(mp.begin(), mp.end(), [](const pair<int, char>& a, const pair<int, char>& b) {
        return a.first > b.first;
    });
        int ans = 0;
        int cnt = 1;
        for(int i=0;i<mp.size();i++){
            if(i<8){
                ans+= mp[i].first;
            }
            else if(i>=8 and i<16){
                ans += (2*(mp[i].first));
            }
            else if(i>=16 and i<24){
                ans += (3*(mp[i].first));
            }
            else ans+= (4*(mp[i].first));
        }
        
        return ans;
    }
};