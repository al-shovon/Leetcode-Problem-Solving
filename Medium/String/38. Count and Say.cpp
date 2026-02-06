//38. Count and Say
class Solution {
public:
    string countAndSay(int num) {
        if(num == 1) return "1";
        string s =  countAndSay(num-1);
        int n = s.size();
        string compress = "";
        int i = 0;
        while(i< n){
            int j = i+1;
            while(j < n && s[j] == s[i]) j++;
            compress+= to_string(j-i) + s[i];


            i = j;

            
        }
        return compress;

        
    }
};

//ap-2
class Solution {
public:
    string countAndSay(int n) {
        string ans = "1";

        for(int i = 2; i<= n;i++){
            int start = 0;
            int size = ans.size();
            string temp ="";
            while(start < size){
                int j = start+1;
                
                while(j < size && ans[start] == ans[j]) j++;
                temp+= to_string(j-start) + (ans[start]);
                
                start = j;
                

            } 
            ans = temp;
        }
        return ans;
        
    }
};
