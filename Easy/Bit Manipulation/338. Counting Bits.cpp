//338. Counting Bits
//Link-> https://leetcode.com/problems/counting-bits
//Optimized Approch
class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        ans[0] = 0;
        for(int i = 1; i <= n; i++){

            if(i % 2 == 0) ans[i] = ans[i/2];
            else ans[i] = ans[i/2] + 1;
           

        }
        return ans;
        
    }
};

//Brute Force Approch

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);
        for(int i = 0; i <= n; i++){
            int temp = i;
            int one = 0;

            while(temp > 0){
                if((temp & 1) == 1)one++;
                temp >>= 1;
            }
            ans[i] = one;

        }
        return ans;
        
    }
};
