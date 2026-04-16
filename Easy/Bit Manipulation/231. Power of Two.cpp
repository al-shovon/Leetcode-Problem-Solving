//231. Power of Two
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return 0;
        return (n & (n-1))== 0 ? 1 : 0;
        
    }
};


//app 2-> loop
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n == 1) return true;
        if(n < 0) return false;

        double r = n;

        while (r > 0)
        {
            if (r == 2)
            {
                return true;
            }

            r = r/2;
            
            
        }
        return false;
        
    }
};

//app 3-> optimized
class Solution {
public:
   bool isPowerOfTwo(int n) {

       
       return n > 0 && (n &(n-1)) == 0;
        
        
    }
};

//app 4: pow(2,30) %2 == 0;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return 0;
        return (1<<30) % n == 0;
        
    }
};
