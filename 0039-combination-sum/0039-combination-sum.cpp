class Solution {
public:
    void fun(vector<int>& candidates , int n , int target , vector<int>&diary , vector<vector<int>>&res , int sum,int idx){
        if(idx == n){
            if(sum == target){
                res.push_back(diary);
            }
            return;
        }
        if(sum + candidates[idx]<=target){
            diary.push_back(candidates[idx]);
            sum = sum+candidates[idx];
            fun(candidates,n,target,diary,res,sum,idx);
            diary.pop_back();
            sum = sum-candidates[idx];
        }
    
        fun(candidates,n,target,diary,res,sum,idx+1);
      
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int idx = 0;
        int sum =0;
        vector<int>diary;
        int n = candidates.size();
        vector<vector<int>>res;
        fun(candidates,n,target,diary,res,sum,idx);
        return res;
        
    }
};