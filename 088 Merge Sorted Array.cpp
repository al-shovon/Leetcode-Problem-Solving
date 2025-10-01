#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int x = 0;
int n2 =0;

if (nums2.size() == 0)
{
    return;
}

 
for (int i = 0; i < m+n; i++)
{
    int p1 = m + x;
    
    if (nums1[i]>nums2[n2] || nums1[i] == 0)
    {
        while (p1>i)
        {
            nums1[p1] = nums1[p1-1];
            p1--;
        }
        nums1[i] = nums2[n2];
        
        x++;
        n2++;
    }
    
    
    
}
    
 
}


void merge_optimized(vector<int>& nums1, int m, vector<int>& nums2, int n) {


if (nums2.size() == 0)
{
    return;
}
int index = nums1.size() -1;
int n1 = m -1, n2 = n-1;

for (int i = index; i >= 0; i--)
{
    if (  n1 >= 0 && (nums1[n1] >= nums2[n2]))
    {
        nums1[i] = nums1[n1];
        n1--;
    }
    else
    {
        nums1[i] = nums2[n2];
        n2--;
    }

    if (n2<0)
    {
        break;
    }
    


    
}

    
 
}



void merge_optimized_2(vector<int>& nums1, int m, vector<int>& nums2, int n) {


if (nums2.size() == 0)
{
    return;
}
int index = nums1.size() -1;
int n1 = m -1, n2 = n-1;

while (n1 >= 0 && n2 >= 0)
{
    if (nums1[n1] >= nums2[n2])
    {
        nums1[index] = nums1[n1];
        n1--;
        index--;
        
    }
 
    else
    {
        nums1[index] = nums2[n2];
        n2--;
        index--;
    }   
}
while (n2>=0)
{
    nums1[index] = nums2[n2];
        n2--;
        index--;
    
}

}

int main(){

    vector<int>nums1 = {1,2,3,0,0,0};
    vector<int>nums2 = {2,5,6};
    int m = 3;
    int n = 3;
    
merge_optimized_2(nums1,m,nums2,n);


    for (int value : nums1 )
    {
        cout<<value<<" ";
    }
    



    return 0;
}