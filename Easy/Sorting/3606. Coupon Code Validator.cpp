// 3606. Coupon Code Validator
//https://leetcode.com/problems/coupon-code-validator?envType=daily-question&envId=2025-12-13


class Solution {
public:
    bool is_valid(string code){
        for(int i =0; i < code.size(); i++){
            if(! isalnum(code[i]) && (code[i] != '_') ) return false;
        }
        return true;
    }
    vector<string> validateCoupons(vector<string>& code, vector<string>& b, vector<bool>& isActive) {
        vector<string>ans;
        vector<pair<string,string>>temp;

        for(int i = 0; i < code.size(); i++){
            if(isActive[i] == true && (b[i] == "electronics" || b[i] == "grocery" || b[i] == "pharmacy" || b[i] == "restaurant")){
                if(! code[i].empty() && is_valid(code[i])) temp.push_back({b[i],code[i]});
                   
                
            }
        }
        sort(temp.begin(),temp.end());

        for(auto i: temp){
            ans.push_back(i.second);
        }
        

        return ans;
        
    }
};
