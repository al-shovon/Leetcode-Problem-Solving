//1404. Number of Steps to Reduce a Number in Binary Representation to One
//ap 1
class Solution {
public:
    int numSteps(string s) {
        int n = s.size();
        int count = 0;
        int carry = 0;

        for(int i = n-1; i> 0;i--){
            if((s[i] -'0' + carry) %2 == 0){
                 count++;
            }
            else{
                count+=2;
                carry = 1;

            }

        }
        return count+carry;
        
    }
};

//ap 2
class Solution {
public:
    int numSteps(string s) {
       

        int n = s.size();

        int count = 0;

        int j = n-1;

        while(j > 0){
            if(s[j] == '0'){
                count++;
                j--;
            }
            else{
                int k = j;
                while(k >= 0 && s[k] != '0') k--;
                if(k == -1){
                    return count+j-k+1;
                }
                count+= (1+j-k);
                j = k;
                s[j] ='1';

            }
        }



       
        return count;


        
    }
};


//ap 3 overflow
class Solution {
public:
    int numSteps(string s) {
        unsigned long long num = 0;

        int n = s.size();

        for(int i = 0; i<n;i++){
            num<<=1;
            if(s[i] == '1') num+=1;
        }
        cout<<num;
        int count = 0;

        while(num != 1){
            if(num%2 == 0) num/=2;
            else num+=1;
            count++;

        }
        return count;


        
    }
};
