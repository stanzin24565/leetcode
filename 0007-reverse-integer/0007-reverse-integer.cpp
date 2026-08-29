class Solution {
public:
    int reverse(int x) {
        long long min_val = -(1ll<<31);
        long long max_val = (1ll<< 31)-1;
        long long rev=0;

        while(x!=0){
            int digit = x%10;
            rev = rev*10 + digit;

            x= x/10;
        }
        if(rev> min_val && rev < max_val){
            return (int)rev;
        }
        else{
            return 0;
        }
        
    }
};