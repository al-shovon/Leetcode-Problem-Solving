//3932. Count K-th Roots in a Range ->c++
//app-> 1 -> loop
class Solution {
public:
    int countKthRoots(int l, int r, int k) {
        if(k == 1) return r-l+1;

        int i = 0;
        while(pow(i,k) < l) i++;
        if(pow(i,k) > r) return 0;

        int j = i+1;

        while(pow(j,k) <= r) j++;
        return j-i;
  
    }
};
