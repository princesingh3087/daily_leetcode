class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        // int s = nums[0]+nums[1]+nums[2];
        int s = INT_MAX;
        int ans = 0;
        for(int i=0;i<n-2;i++){
            int left = i+1;
            int right = n-1;
        
            while(left < right){
                int sumclosest= nums[i]+nums[left]+nums[right];
                int dif = abs(sumclosest-target);
                if(dif < s){
                    s = dif;
                    ans = sumclosest;
                    
                 
                }
                if(sumclosest<target){
                    left ++;
                }
                else if(sumclosest>target){
                    right--;
                }
                else{
                    return sumclosest;
                }
            }
        }
    return ans;
        
    }
};