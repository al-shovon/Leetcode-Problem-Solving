#include<iostream>
#include<unordered_set>
using namespace std;



   bool isHappy(int nums,unordered_set<int>&abc){



        int square_digit = 0;
        
        while(nums > 0 ){
            square_digit += ((nums%10) * (nums%10));
            nums = nums/10;
        }

        if(square_digit == 1){
            return true;
        }

        if (abc.find(square_digit) != abc.end())
        {
            return false;
            
            
        }
        abc.insert(square_digit);

        

        

       return isHappy(square_digit,abc);
       

   
        
    }

int main(){
    int n = 2;

    unordered_set<int>abc;

    cout<<isHappy(n,abc);



    return 0;
}