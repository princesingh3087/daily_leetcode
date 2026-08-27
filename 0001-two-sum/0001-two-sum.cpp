class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        for(int i = 0;i<nums.size();i++){
            int looking = target - nums[i];
            if(mp.find(looking) != mp.end()){
                return{mp[looking],i };
            }
            mp[nums[i]] = i;
            
        }
        return {};
    }
};