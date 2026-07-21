// 3499. Maximize Active Section with Trade I
class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.size();

        int i = 0;

        int left_0 = 0;
        int total_0 = 0;
        int one = 0;


        while(i < n){
            if(s[i] == '0'){
                left_0++;
                i++;
                continue;
            }
            while(i<n && s[i] == '1'){
                one++;
                i++;
            }
            int right_0 = 0;
            while(i<n && s[i] == '0'){
                right_0++;
                i++;
            }
            if(left_0 >0 && right_0 >0) total_0 = max(total_0, left_0+right_0);
            left_0 = right_0;

        }
        return one+total_0;



        
    }
};
