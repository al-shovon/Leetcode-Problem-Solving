//3783. Mirror Distance of an Integer
class Solution {
public:
    int mirrorDistance(int n) {

        int temp = n;
        int rev = 0;

        while(temp > 0 ){
            int digit = temp%10;
            rev*=10;
            rev+=digit;
            temp/=10;
        }

        return abs(n-rev);


        
    }
};
