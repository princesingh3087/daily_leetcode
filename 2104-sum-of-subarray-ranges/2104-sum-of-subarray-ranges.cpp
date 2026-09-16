class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long ans = 0;
        for(int i=0;i<nums.size();i++){
            int mini = nums[i];
            int maxi = nums[i];
            for(int m=i+1 ; m<nums.size();m++){
                mini = min(mini,nums[m]);
                maxi = max(maxi,nums[m]);
                ans = ans+(maxi-mini);
            }


        }
        return ans;
        
    }
};