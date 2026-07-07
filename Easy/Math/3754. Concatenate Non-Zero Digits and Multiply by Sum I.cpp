// 3754. Concatenate Non-Zero Digits and Multiply by Sum I.py
class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n == 0) return 0;
        string s = to_string(n);
        long long sum = 0;
        string temp = "";
        for(auto i : s){
            if(i != '0')temp+=i;
            sum+= i - '0';
        }
        int x = stoi(temp);
        sum = sum*x;
        return sum;
        
    }
};
