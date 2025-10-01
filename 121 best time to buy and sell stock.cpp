
#include<iostream>
#include<vector>

using namespace std;

int maxProfit2(vector<int>& prices) ;
int maxProfit(vector<int>& prices) {

int profit = 0;

for (int i = 0; i < prices.size()-1; i++)
{
    for (int j = i+1; j < prices.size(); j++)
    {
        if (prices[i] < prices[j])
        {
            profit = max(profit, ( prices[j] - prices[i]));
        }
        
    }
    
}

return profit;

        
}

int  main(){


vector<int> prices = {7,1,7,3,2,10};


cout<<maxProfit(prices)<<endl;
cout<<maxProfit2(prices)<<endl; 




    return 0;
}  


int maxProfit2(vector<int>& prices) {

int profit = 0;
int max_1 = prices[0];


for (int i = 1; i < prices.size(); i++)
{


    if (prices[i] > max_1)
    {
        profit = max(profit, ( prices[i] - max_1));
    }

    max_1 = min(max_1, prices[i]);
    

    
}

return profit;

        
}







