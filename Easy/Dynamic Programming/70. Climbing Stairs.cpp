//70. Climbing Stairs
//ap->1 -> recursion + dp
class Solution {
public:
    int dp[46] = {0};
    int climbStairs(int n) {
        if(n == 1 || n == 2) return n;
        if(dp[n] != 0) return dp[n];

        int two = climbStairs(n-2);
        int one = climbStairs(n-1);
        return dp[n] = two+one;
        
    }
};

//ap 2 bottom up
class Solution {
public:
    int climbStairs(int n) {
        if(n == 1 || n == 2) return n;
        int first = 1;
        int second = 2;
        int current  = 2;
        

        for(int i = 3; i<= n;i++){
            current = first+second;
            first = second;
            second = current;

        }
        return current;
        
    }
};
