#include<iostream>
#include<vector>

using namespace std;


    bool checkDivisibility(int n) {
        int n1=n;
        int sum = 0;
        int product = 1;

        while (n1 > 0)
        {
            sum+= n1%10;
            product*= n1%10;
            n1 = n1/10;
        }

        if ((n % (sum + product)) == 0 )
        {
            return true;
        }
        else return false;


        

   
        


        
    }

    int main(){
        int n = 23;
        cout<<checkDivisibility(n)<<endl;
    }