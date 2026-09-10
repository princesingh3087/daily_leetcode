class Solution {
public:
    int getMaxFreq(vector<int>& freq){
        int maxfreq =0;
        for(int i=0;i<26;i++){
            maxfreq = max(maxfreq,freq[i]);
        }
        return maxfreq;
    }
    int characterReplacement(string s, int k) {
        vector<int>freq(26,0);
        int left=0,right=0,ans=0;
        for(int right=0;right<s.size();right++){
            freq[s[right]-'A']++;
            int length=right-left+1;
            int maxfreq = getMaxFreq(freq);
            int dif = length-maxfreq;
            while(dif>k){
                freq[s[left]-'A']--;
                left++;
                length = right-left+1;
                maxfreq = getMaxFreq(freq);
                dif = length - maxfreq;
            }
            ans  = max(ans,(right-left+1));
        }
        return ans;
    }
};