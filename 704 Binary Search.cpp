#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


    int binary_search(vector<int>nums,int target,int start,int end){
        if (start <= end) {

      
        int mid = start + (end-start)/2;
        if (nums[mid] == target)
        {
            return mid;
        }
        else if (nums[mid] > target)
        {
            return binary_search(nums,target,start,mid-1);
        }
        else return binary_search(nums,target,mid+1,end);
        }
        
        else return -1;
        
    }




    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        return binary_search(nums,target,start,end);

        
    }


int main(){
vector<int>nums = {-1,0,3,5,9,12};
int target = 9;
sort(nums.begin(),nums.end());
cout<<search(nums,target)<<endl;

    return 0;
}