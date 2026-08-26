class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows ==1){
            return s;}

        vector<string> row(numRows);
        int curr= 0;
        bool going_down = true;

        for(char c:s){
            row[curr]+=c;
            if(curr == numRows -1){
                going_down = false;
            }
            else if(curr ==0 ){
                going_down = true;
            }

            if(going_down){
                curr++;
            }
            else {
                curr--;
            }

        }
        string ans ="";
        for(string r :row){
            ans += r;
        }
        return ans;
    }
};