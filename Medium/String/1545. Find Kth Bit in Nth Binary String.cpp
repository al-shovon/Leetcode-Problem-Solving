//1545. Find Kth Bit in Nth Binary String
class Solution {
public:
    char findKthBit(int n, int k) {
        string s = "0";
        
        for(int i = 2; i<=n;i++){
            int sz = s.size();
            string s2 = "";
            for(int j = sz-1; j >= 0;j-- ){
                s2+= (s[j] == '1')?  '0' : '1';
            }
            s+=('1' + s2);
            
           if(s.size() >= k) return s[k-1];

            
        }
        
        return s[k-1];
        
    }
};

//app 2

class Solution {
public:

    char find(int n, int k, string s) {
        if(s.size() >= k) return s[k-1];

        string s2 = "1";

        for(int i = s.size()-1; i>= 0; i--){
            if(s[i] == '1') s2.push_back('0');
            else s2.push_back('1');
        }
        return find(n,k,s+s2);

    }



    char findKthBit(int n, int k) {
        string s = "0";
        return find(n,k,s);
  
    }
};
