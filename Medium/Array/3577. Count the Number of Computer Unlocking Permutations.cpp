// 3577. Count the Number of Computer Unlocking Permutations
// Link-> https://leetcode.com/problems/count-the-number-of-computer-unlocking-permutations?envType=daily-question&envId=2025-12-10

class Solution {
public:
    long long mod = 1000000007;
    int countPermutations(vector<int>& complexity) {
        int n = complexity.size();
        long long ans = 1;
        for(int i = 1; i < n; i++){
            if(complexity[i] <= complexity[0]) return 0;
            ans = (1LL * ans * i)%mod;
        }
        return ans;
        
    }
};
