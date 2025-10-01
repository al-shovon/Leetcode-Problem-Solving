#include<iostream>
#include<vector>
#include<set>
#include<unordered_set>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {

    vector<int>ans;

    unordered_set<int>num;

    int n = grid.size();
    int n2 = n*n;

     int sum2 = (n2*(n2+1))/2;

  

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (num.find(grid[i][j]) != num.end() )
            {
                ans.push_back(grid[i][j]);
             
                
            }
            else {
                num.insert(grid[i][j]);

                sum2-=grid[i][j];
            }
            
            
        }
        
        
    }

   

    ans.push_back(sum2);
    

    return ans;
        
    }


int main(){

vector<vector<int>>grid = {{1,3}, {2,2}};

vector<int>ans = findMissingAndRepeatedValues(grid);
for (int i : ans)
{
    cout<<i<<" ";
}





    return 0;
}