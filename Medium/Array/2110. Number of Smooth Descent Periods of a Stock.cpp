//2110. Number of Smooth Descent Periods of a Stock

class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        int n = prices.size();
            long long ans = 0;

            int i = 0, j= 1;
            while(i < n && j < n){
                
                while(j < n && prices[j-1] - prices[j] == 1) j++;
                int temp = (j-i);
                ans+= (1LL * temp*(temp-1))/2;
                i = j;
                j = j+1;

            }
            return ans+n;
        
    }
};
