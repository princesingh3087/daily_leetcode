class Solution {
public:
    int mySqrt(int x) {
        int n =x;
        int left =1;
        int right = n;
        int ans=0;
        while (left<=right){
            long long mid = left+(right-left)/2;
            if(mid*mid==n){
                ans = mid;
                break;
            }
            else if(mid*mid<n){
                ans = mid;
                left=mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return ans;
        
    }
};