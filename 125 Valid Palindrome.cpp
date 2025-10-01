#include<iostream>
#include<string>
#include<cctype>

using namespace std;

bool is_alpha(char x){

    if ('0' <= x && x <= '9')
    {
        return true;
    }
    else if ('a' <= x && x <= 'z')
    {
        return true;
    }
    else if ('A' <= x && x <= 'Z')
    {
        return true;
    }

    return false;
    
    
    

}

bool isPalindrome(string s) {

    int start = 0;
    int end = s.size()-1;

    while (start < end)
    {
        if (! (is_alpha(s[start])))
        {
            start++;
            continue;
        }
        if (! (is_alpha(s[end])))
        {
            end--;
            continue;
        }
        
        
      
        if (tolower(s[start]) != tolower(s[end]))
            {
                return false;
            }
            
          start++;
           end--;  
        

    }

    return true;
    
    

        
    }

int main(){

    string s = "A1gfds";
    
    cout<<isPalindrome(s);
 
    
    








    return 0;
}