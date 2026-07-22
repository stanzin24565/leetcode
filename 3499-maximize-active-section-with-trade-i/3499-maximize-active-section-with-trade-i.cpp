class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();
        string t = '1'+ s + '1' ;
        int totalONE=0;
        for(int i=0;i<n;i++){
            if(s[i]== '1'){
                totalONE++;
            }
        }
        vector<pair<char , int>> group ;
        int i=0;
        while(i<t.size()){
            int ch = t[i];
            int len =0;
            while(i<t.size() && t[i]== ch){
                len ++;
                i++;
            }
            group.push_back({ch,len});
        }
        int ans = totalONE;

        for(int i=1;i+1<group.size();i++){
            if(group[i].first =='1' && group[i-1].first =='0' && group[i+1].first == '0'){
                int leftzero = group[i-1].second;
                int rightzero = group[i+1].second;
                ans = max(ans , totalONE +leftzero + rightzero);
            }
           
        }
        return ans ;

        
    }
};