class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int result = -1;
        int low = 0 ; int high = n-1;
        while(low<=high){
            int guess = (low+high)/2;
            if(nums[guess]>nums[n-1]){
                low=guess+1;
            }
            else if(nums[guess]<nums[n-1]){
                result = nums[guess];
                high = guess-1;
            }
            else if(low == high){
                result = nums[guess];
                high = guess -1;
            }
        }
        return result;
        
    }
};