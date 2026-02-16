//67. Add Binary

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size()-1;
        int n = b.size()-1;
        string ans = "";
        int sum = 0,carry = 0;

        while(m >= 0 || n >= 0){
            sum = carry;
            if(m>= 0){
                 sum+= a[m] - '0';
                 m--;
            }
            if(n>= 0){
                sum+= b[n] - '0';
                n--;
            }
            ans+= to_string(sum%2);
            carry = sum/2;

            
        }
        if(carry == 1) ans+='1';
        reverse(ans.begin(),ans.end());
        return ans;

        
    }
};

//app 2

class Solution {
public:
    string addBinary(string a, string b) {
        int m = a.size();
        int n = b.size();
        int start;
        string temp;

        if(m >= n){
             temp = a+b;
             start = m-1;
        }
        else {
            start = n-1;

            temp = b+=a;
        }

        int end = m+n-1;
        int s = start;
        string ans = "";
        int carry = 0;

        while(end != start){
            if(carry == 0){
                if(temp[s] == '1' && temp[end] == '1'){
                    ans+= '0';
                    carry = 1;

                }
                else if(temp[s] == '0' && temp[end] == '0'){
                    ans+='0';

                }
                else{
                    ans+= '1';

                }

            }
            else{

                if(temp[s] == '1' && temp[end] == '1'){
                    ans+= '1';
                    carry = 1;


                }
                else if(temp[s] == '0' && temp[end] == '0'){
                    ans+= '1';
                    carry = 0;


                }
                else{
                    ans+= '0';

                }

            }
            s--;
            end--;

        }
        //s--;
        while(s >= 0){
            if(carry == 1){
                if(temp[s] == '1'){
                    ans+='0';
                    carry = 1;
                }
                else{
                    ans+='1';
                    carry = 0;
                }
            }
            else{
                if(temp[s] == '1'){
                    ans+='1';
                    carry = 0;
                }
                else{
                    ans+='0';
                    
                }

            }
            s--;
        }
      
        
        if(carry == 1) ans+='1';
        reverse(ans.begin(),ans.end());

        return ans;



        
    }
};
