class Solution {
public:
    void fun(int open , int close , string temp , vector<string>& ans , int n ){
        if(open ==n && close ==n){
            ans.push_back(temp);
            return;
        }
        if(open<n){
            temp.push_back('(');
            fun(open+1 , close , temp , ans , n);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            fun(open , close+1 , temp , ans , n);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        fun( 0 , 0 , "" , ans , n );
        return ans;
        

        
    }
};