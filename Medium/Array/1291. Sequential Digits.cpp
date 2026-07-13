//1291. Sequential Digits
//O(1)
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int>ans;
        string ls = to_string(low);
        string hs = to_string(high);
        int l = ls.size();
        int h = hs.size();

        while(l <= h){
            
            for(int i = 1; i<= 9-l+1;i++){
                int val = 0;
                for(int j = i; j < i+l;j++){
                    val = (val*10) + j;

                }
                if(val >= low && val <= high) ans.push_back(val);
                if(val > high) break;
            }
            l++;


            

        }

        return ans;


        
    }
};


//app 2
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {

        vector<int>ans;
        int start = 1;
        while(start < 9){

            int num = start;

            while(num <high){
                int digit = num%10;
                
                num = (num*10)+digit+1;
                if(digit == 9) break;

                if(num >= low && num<= high) ans.push_back(num);
                if(num >= high) break;

            }
            start++;
        }
        sort(ans.begin(),ans.end());

        return ans;


        
    }
};
