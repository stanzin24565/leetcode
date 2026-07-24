class Solution {
public:
    vector<string> result;
    vector<string> mapping{
        "",
        "",
        "abc",
        "def",
        "ghi",
        "jkl",
        "mno",
        "pqrs",
        "tuv",
        "wxyz"
   };
   void solve(string &digits , int index, string curr){
        if(index == digits.size()){
            result.push_back(curr);
            return;
        }
        int num = digits[index] - '0';
        string letters = mapping[num];

        for( char letter: letters){
            curr.push_back(letter);
            solve(digits , index+1 , curr);

            curr.pop_back();

        }
        
    }


    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }
        solve(digits , 0, "");
        return result; 
    }
};