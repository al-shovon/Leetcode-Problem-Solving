#include<iostream>
using namespace std;

bool isPalindrome(long int x) {

    if (x < 0) return false;
    long int n= x;
    long int ans = 0;

    while (n > 0)
    {
        ans*=10;
        ans+= n%10;
        n = n/10;
    }

    if (ans == x) return true;
    else return false;
  

}



int main(){

int n = -0;

cout<<isPalindrome(n);




    return 0;
}