//1980. Find Unique Binary String

class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {

        int n = nums.size();
        unordered_set<string>st;
        for(int i = 0;i<n;i++) st.insert(nums[i]);

        for(int i = 0; i<= 16;i++){
            string temp = "";
            int num = i;

            for(int j = 0;j < n;j++){
                int a = num & 1;
                temp+= to_string(a);
                num>>=1;

            }
            reverse(temp.begin(),temp.end());
            if(st.find(temp) == st.end()) return temp;

        }
        return "";
        
    }
};
