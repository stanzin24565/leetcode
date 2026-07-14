class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256,0);
        int i=0;
        int maxi= 0;
        for(int j =0;j<s.size(); j++){
            freq[s[j]]++ ;
            while(freq[s[j]] > 1){
                freq[s[i]]--;
                i++;
            }
            int len = j-i+1;
            maxi = max(maxi, len);
        }
        return maxi;     
    }
};