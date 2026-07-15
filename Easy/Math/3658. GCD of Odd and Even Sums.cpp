// 3658. GCD of Odd and Even Sums ->app1
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        return n;
    }
};

//app_>2
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = pow(n,2);
        int even = n*(n+1);
        return gcd(odd,even);
    }
};
