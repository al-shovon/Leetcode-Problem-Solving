// 2130. Maximum Twin Sum of a Linked List
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int pairSum(ListNode* head) {
        vector<int>nums;
        ListNode* temp = head;

        while(temp != NULL){
            nums.push_back(temp->val);
            temp = temp->next;
        }
        int n = nums.size()-1;
        int ans = 0;
        int i = 0; 
        
        while(i < n){
            ans = max(ans,nums[i]+nums[n]);
            i++;
            n--;
        }
        return ans;
    }
};
