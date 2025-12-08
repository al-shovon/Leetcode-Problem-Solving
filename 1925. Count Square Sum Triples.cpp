
//1925. Count Square Sum Triples
// link -> https://leetcode.com/problems/count-square-sum-triples?envType=daily-question&envId=2025-12-08

//two pointer
class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int c = n; c > 2; c--){
            int a = 1;
            int b = c-1;

            while(a < b){
                int right = (a*a) + (b*b);
                if((c*c) == right){

                 count+=2;
                 a++;
                 b--;
            }
                else if(c*c > right) a++;
                else b--;
            }
            
            
        }
        return count;
    }
};

//brute force
class Solution {
public:
    int countTriples(int n) {
        int count = 0;
        for(int i = 1; i < n-1; i++){
            for(int j = i+1; j < n; j++){
                for(int k= j+1; k <=n; k++){
                    if((i*i)+(j*j) == (k*k))count += 2;

                }
            }
        }
        return count;
    }
};
