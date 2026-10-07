class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0){
            return false;
        }
        int n = x;
        long long reverse = 0;
        while(x>0){
            int digit = x%10;
            reverse = reverse*10+digit;
            x = x/10;
        }
        if(reverse==n){
            return true;
        }
        else{
            return false;
        }
     
        
    }
};