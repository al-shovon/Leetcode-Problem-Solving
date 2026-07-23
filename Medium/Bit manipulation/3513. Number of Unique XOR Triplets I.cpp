// 3513. Number of Unique XOR Triplets I

class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n = nums.size();
        if(n<3) return n;
        int start = 2;
        while(start <= n) start <<= 1;
        return start;



    }
};
