class Solution {
public:
    bool fun(vector<int>&have, vector<int>&need){
        for(int i=0;i<128;i++){
            if(have[i]<need[i]){
                return false;
            }

        }
        return true;
    }
    string minWindow(string s, string t) {
        vector<int>have(128,0);
        vector<int>need(128,0);
        for(int i=0 ; i<t.size();i++){
            need[t[i]]++;
        }
        int left=0,start=0;
        int res = INT_MAX;
        for(int right=0;right<s.size();right++){
            have[s[right]]++;
            while(fun(have,need)){
                int length = right-left+1;
                if(length<res){
                    res = length;
                    start = left;

                }
                have[s[left]]--;
                left++;

            }
        }
        if(res == INT_MAX){
            return "";
        }
        else{
            return s.substr(start,res);
        }
        
    }
};