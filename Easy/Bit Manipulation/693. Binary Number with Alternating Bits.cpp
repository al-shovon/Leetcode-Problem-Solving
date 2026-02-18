//693. Binary Number with Alternating Bits

//app-1
class Solution {
public:
    bool hasAlternatingBits(int n) {
        int bit = n&1;
        n >>=1;
        while(n!=0 ){
            int bit2 = n&1;
            if(bit2 == bit) return false;
            bit = bit2;
            n>>=1;
        }
        return true;
        
    }
};

//app-2 optimized
class Solution {
public:
    bool hasAlternatingBits(int n) {

        unsigned int x= n^(n>>1);
        return (x & (x+1)) == 0;
        
    }
};
