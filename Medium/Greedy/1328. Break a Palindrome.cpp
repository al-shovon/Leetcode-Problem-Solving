//1328. Break a Palindrome

//app 1
class Solution {
public:
    string breakPalindrome(string palindrome) {
        int n = palindrome.size();
        if(n==1) return "";

        int i = 0;
        int ind = -1;
        if(n%2 != 0) ind = n/2;

        while(i < n ){
            if(i == ind){
                i++;
                continue;
            }
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
            i++;

        }
        palindrome[n-1] = 'b';
        return palindrome;
        
    }
};

//app 2 optimized
 class Solution {
public:
    string breakPalindrome(string palindrome) {

        int n = palindrome.size();
        if(n==1) return "";

        int i = 0;
        while(i < n/2 ){
            if(palindrome[i] != 'a'){
                palindrome[i] = 'a';
                return palindrome;
            }
            i++;

        }
        palindrome[n-1] = 'b';
        return palindrome;
        
    }
};
