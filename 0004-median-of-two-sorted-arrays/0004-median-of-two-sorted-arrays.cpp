class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int a = nums1.size();
        int b = nums2.size();

        vector<int> ans(a+b);

        for(int i=0; i< a; i++){
            ans[i] = nums1[i];
    
        }
        for(int i=0; i<b; i++){
            ans[a+i] = nums2[i];
        }

        for(int i=0 ;i<a+b; i++){
            cout << ans[i] << endl;
        }

        sort(ans.begin(), ans.end());
        int n = ans.size();
        if(n%2 !=0){
            return ans[n/2];

        }else{
            return (ans[((n/2)-1)]+ (ans[n/2]))/2.0;
        }

    }
    
};