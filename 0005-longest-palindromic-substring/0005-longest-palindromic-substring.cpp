class Solution {
public:
    string longestPalindrome(string s) {
        if(s.size()<= 1){
            return s;
        }
        int start = 0;
        int end = 1;
        // odd 
        for(int i =0;i<s.size();i++){
            int left = i;
            int right = i;

            while(left>=0 && right<s.size() && s[left]== s[right]){
                if(right-left+1 >end){
                    start = left;
                    end= right-left+1;
                }
                left--;
                right++;
            }
            //even 
            left = i;
            right = i+1;

            while(left>=0 && right<s.size() && s[left]== s[right]){
                if(right - left+1 >end){
                    start = left;
                    end= right-left+1;
                }
                left--;
                right++;
            }
        }
        return s.substr(start,end);
    }
};