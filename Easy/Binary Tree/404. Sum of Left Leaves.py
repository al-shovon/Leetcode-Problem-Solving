# 404. Sum of Left Leaves.cpp

# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def calculate(self, root, is_left):
        if(root == None): return 0
        if(not root.left and not root.right and is_left): return root.val

        return self.calculate(root.left,True) + self.calculate(root.right, False)

    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        return self.calculate(root,False)
