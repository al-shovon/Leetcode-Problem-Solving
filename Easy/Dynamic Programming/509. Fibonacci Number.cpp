//509. Fibonacci Number

//Approch ->1->recursion pow(2,n);
class Solution {
public:
    int fib(int n) {
        if(n==0 || n==1) return n;

        return fib(n-1) + fib(n-2);
        
    }
};

//Approch ->2 ->dp;
class Solution {
public:
    vector<int>dp = vector<int>(31,-1);

    
    int fib(int n) {

       if(n == 0 || n == 1) return n;
       if(dp[n] != -1) return dp[n];

       return dp[n] = fib(n-1)+fib(n-2);
        
    }
};

//Approch ->3 ->bottom up;
class Solution {
public:

    
    int fib(int n) {
        vector<int>dp(n+2);
        dp[0] = 0;
        dp[1] = 1;
        for(int i = 2; i<=n;i++){
            dp[i] = dp[i-1]+dp[i-2];
        }
        return dp[n];
        
    }
};

//approch 4-> space O(1)
class Solution {
public:

    
    int fib(int n) {
        if(n <= 1) return n;
        int prev1 = 1;
        int prev2 = 0;
        int current;
        

        for(int i = 2; i<=n;i++){
            current= prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
        return current;
        
    }
};



