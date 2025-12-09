// 1318. Minimum Flips to Make a OR b Equal to c
// Link-> https://leetcode.com/problems/minimum-flips-to-make-a-or-b-equal-to-c
//approch - 1
class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int count = 0;

        while(a > 0 || b > 0 || c > 0){
            int abit = a & 1;
            int bbit = b & 1;
            int cbit = c & 1;
            int orbit = abit | bbit;
            if(orbit != cbit){
                if(cbit == 0 ){
                    if(abit == 1 && bbit == 1) count+= 2;
                    else count++;

                }
                else{
                    count++;
                }
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return count;
        
    }
};

//optimized

class Solution {
public:
    int minFlips(int a, int b, int c) {
        
        int count = 0;

        while(a > 0 || b > 0 || c > 0){
            
            if((c & 1) == 1){
                if((a & 1) == 0 && (b & 1) == 0 ) count++;

            }
            else{
                if((a & 1) == 1) count++;
                if((b & 1) == 1) count++;  
            }
            a = a >> 1;
            b = b >> 1;
            c = c >> 1;
        }
        return count;
        
    }
};
