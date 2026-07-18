class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int gcd=0;
        int n1= nums[0];
        int n2 = nums[nums.size()-1];

        for(int i=1;i<= n1;i++){
            if(n1%i==0 && n2 %i==0){
                gcd=i;
            }
        }
        return gcd;
        

        
    }
};