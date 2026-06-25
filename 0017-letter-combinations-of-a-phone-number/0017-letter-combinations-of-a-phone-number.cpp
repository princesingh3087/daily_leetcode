class Solution {
public:
    unordered_map<char,string>f{
        {'2', "abc"},
        {'3', "def"},
        {'4', "ghi"},
        {'5', "jkl"},
        {'6', "mno"},
        {'7', "pqrs"},
        {'8', "tuv"},
        {'9', "wxyz"}
    };
    void fun(string & digits , int n ,int idx , string & temp , vector<string>&res){

        if(idx==n){
            res.push_back(temp);
            return;
        }
        string keypad = f[digits[idx]];
        for(int j =0;j<keypad.size();j++){
            temp.push_back(keypad[j]);
            fun(digits,n,idx+1,temp,res);
            temp.pop_back();
        }
        

    }
    vector<string> letterCombinations(string digits) {
        int n = digits.size();
        int idx = 0;
        string temp = "";
        vector<string>res;
        fun(digits,n,idx,temp,res);
        return res;
        
    }
};