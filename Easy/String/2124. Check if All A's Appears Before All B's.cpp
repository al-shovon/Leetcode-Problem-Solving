class Solution {
public:
    bool checkString(string s) {

        int n = s.size();
        bool check = false;

        for(int i = 0; i<n;i++){
            if(!check && s[i] == 'b'){
                check = true;
                continue;
            }
            if(check && s[i] == 'a') return false;


        }
        return true;
        
    }
};
