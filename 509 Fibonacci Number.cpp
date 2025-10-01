#include<iostream>
#include<unordered_map>

using namespace std;

int fib(int n){

    unordered_map<int,int>temp;
    temp[0] = 0, temp[1]=1;
    for (int i = 2; i <= n; i++)
    {
        temp[i] = temp[i-1]+temp[i-2];
    }
    return temp[n];
    
}

int main(){

    cout<<fib(4)<<endl;
    return 0;
}