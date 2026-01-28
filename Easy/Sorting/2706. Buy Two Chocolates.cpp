//2706. Buy Two Chocolates

class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int n = prices.size();
        int s1 = 101,s2 = 102;
        for(int i =0; i<n;i++){
            if(prices[i] < s1){
                s2 = s1;
                s1 = prices[i];
            }
            else s2 = min(s2,prices[i]);

        }
        int remain = money - s1 - s2;
        
        return (remain >= 0) ? remain : money;
        
    }
};
