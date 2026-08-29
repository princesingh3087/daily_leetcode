class Solution {
public:
    bool validPalindrome(string s) {
        int i=0;
        int j = s.size()-1;
        while(i<j){
            if(s[i]!=s[j]){
                int left = i+1;
                int right = j;
                while(left<right){
                    if(s[left]!=s[right]){
                        break;
                    }
                    left++;
                    right--;
                }
                if(left>=right){
                    return true;
                }

                left = i;
                right = j-1;
                while(left<right){
                    if(s[left]!=s[right]){
                        break;
                    }
                    left++;
                    right--;
                }
                if(left>=right){
                    return true;
                }
                return false;

            }
            i++;
            j--;

        }
        return true;
        
    }
};