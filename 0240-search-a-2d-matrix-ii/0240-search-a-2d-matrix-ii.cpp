class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
       int m = mat.size();
       int n = mat[0].size();
       int row = m-1;
       int col = 0;
       while(row>=0 && col<n){

        if(mat[row][col]==target){
            return true;
        }
        else if(mat[row][col]<target){
            col++;
        }
        else{
            row--;
        }

       }
       return false;
    }
};