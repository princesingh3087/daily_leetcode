class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
         int rows = mat.size();
        int cols = mat[0].size();
        int low = 0;
        int high =rows-1;
        int row = -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(mat[guess][0]==target){
                row = guess;
                break;
            }
            else if(mat[guess][0]<target){
                row= guess;
                low=guess+1;
            }
            else{
                high = guess-1;
            }
        } 
        if(row==-1){
            return false;
        }
        low = 0;
        high = cols-1;
        while(low<=high){
            int guess = (low+high)/2;
            if(mat[row][guess]==target){
                return true;
            }
            else if(mat[row][guess]<target){
                low = guess+1;
            }
            else{
                high = guess-1;
            }
        }
        return false;
    }
};