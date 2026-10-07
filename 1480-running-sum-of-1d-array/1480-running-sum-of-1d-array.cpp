class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int res = 0;
        vector<int>r;
        for(int i = 0 ; i<nums.size();i++){
           res = res+nums[i];
            r.push_back(res);

        }
        return r;
        
    }
};