# 2130. Maximum Twin Sum of a Linked List
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def pairSum(self, head: Optional[ListNode]) -> int:
        ans = 0
        nums = []
        temp = head

        while(temp != None):
            nums.append(temp.val)
            temp = temp.next
        
        n = len(nums)-1
        i = 0
        while(i < n):
            ans = max(ans, nums[i]+nums[n])
            i+=1
            n-=1
        
        return ans
