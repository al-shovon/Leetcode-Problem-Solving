//approch-> bit manupulation

//397. Integer Replacement
//ap 1-> dp
class Solution {
public:
unordered_map<int,long long>dp;

int calculate(long long n){
        if(n == 1) return 0;
        if(dp.find(n) != dp.end()) return dp[n];
        if(n%2 == 0) return dp[n] = 1 + calculate(n/2);

        long long plus = calculate(n+1);
        long long minus = calculate(n-1);
        return  dp[n] = 1 + min(plus,minus);

}


    int integerReplacement(int n) {
        return calculate((long long)n);
    }
};

//approch->2 recursion

class Solution {
public:
    int integerReplacement(long long n) {
        if(n == 1) return 0;
        if(n%2 == 0) return 1 + integerReplacement(n/2);

        long long plus = integerReplacement(n+1);
        long long minus = integerReplacement(n-1);
        return  1+ min(plus,minus);
        
    }
};
