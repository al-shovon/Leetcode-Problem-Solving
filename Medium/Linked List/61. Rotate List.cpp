//61. Rotate List
//app 1
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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL) return head;
        int count = 0;
        ListNode* temp = head;

        while(temp->next != NULL){
            count++;
            temp = temp->next;
        }
        count++;
        int change =count - ( k%count);

        temp->next = head;
        

        int start = 1;

        ListNode* travel = head;

        while(start <change){
            travel = travel->next;
            start++;

        }
        ListNode* newhead = travel->next;
        travel->next = NULL;




        return newhead;

        
    }
};
