//2147. Number of Ways to Divide a Long Corridor

class Solution {
public:
    long long M = 1e9 + 7;
    int numberOfWays(string corridor) {
        int n = corridor.size();

        int s = 0;
        for(int i =0; i < n; i++){
            if(corridor[i] == 'S') s++;
        }
        if(s % 2 != 0 || s == 0) return 0;

        long long ans = 1;
        int start = 0, end = n-1;
        int ss = 0, es = 0;


        while( ss < 2 ){
            if(corridor[start] == 'S') ss++;
            start++;
        }
        while(es < 2 ){
            if(corridor[end] == 'S') es++;
            end--;
        }

        while(start <= end){
            
            if(corridor[start] == 'P'){
                int count_p = 1;
                while(start <= end && corridor[start] != 'S') {
                    count_p++;
                    start++;
                }
                ans = (((count_p % M) * ans) % M);
                


            }
            else{
                int count_s = 0;

                while(start <= end && count_s < 2) {
                    if(corridor[start] == 'S') count_s++;
                    start++;
                }
                



            }
        }
        return ans % M;





        
    }
};
