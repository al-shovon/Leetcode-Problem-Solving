//190. Reverse Bits

//app 1
class Solution {
public:
    int reverseBits(int n) {

        int st = 0;
        int i = 0;

        while(i<32){
            int val = n & 1;
            n >>= 1;
            st*=2;
            st+=val;
            i++;
        }

        return st;
        
    }
};

//app 2

class Solution {
public:
    int reverseBits(int n) {

        int st = 0;

        for(int i = 0; i< 32;i++){
            st <<=1;
            if(n == 0) continue;
                
            st |= (n & 1);
            n >>= 1;
        }
        
        return st;
        
    }
};
