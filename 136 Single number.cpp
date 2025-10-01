#include<iostream>
#include<climits>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums);

int single_num(int num[], int n){

    int max_num = INT_MIN;

    for (int i = 1; i <= n; i++)
    {
        if (num[i]> max_num)
        {
            max_num = num[i];
        }
        
    }

   vector<int> num2(max_num+1, 0);

   for (int  i = 1; i <= n; i++)
   {
        num2[num[i]] +=1;
   }

 
   
    for (int i = 1; i <= max_num; i++)
    {
        if (num2[i] == 1)
        {
            return i;
        }
        
    }
    
    return 0;

}

int main(){

int n;
cin>>n;

int num[n];
vector<int>num2 ={1,2,3,1,2};

for (int i = 1; i <= n; i++)
{
    cin>>num[i];

}


cout<<single_num(num, n)<<endl;

cout<<endl<<singleNumber(num2)<<endl;





    return 0;
}

    int singleNumber(vector<int>& nums) {

        int answer = 0;

        for(int i : nums){
            answer = answer ^ i;
        }

        return answer;
        
    }