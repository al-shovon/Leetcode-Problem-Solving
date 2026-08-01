// 3014. Minimum Number of Pushes to Type Word I
class Solution {
public:
    int minimumPushes(string word) {
        
        int n = word.size();
        int push = 0;
        int  start = 1;

        while(n > 0){
            if(n > 8){
                push+= (8*start);
            }
            else{
                push+= (n*start);
                return push;

            }
            start++;
            n-=8;

        }
        return push;
        
    }
};
