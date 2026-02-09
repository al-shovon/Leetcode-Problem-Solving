//1382. Balance a Binary Search Tree

class Solution {
public:
void helper(TreeNode* root, vector<int>&nums){
    if(root == NULL) return;
    helper(root->left,nums);
    nums.push_back(root->val);
    helper(root->right,nums);

}
    TreeNode* create_bst(vector<int>&nums,int start,int end){
        if(start > end) return NULL;
        int mid = start + (end-start)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left = create_bst(nums,start,mid-1);
        root->right = create_bst(nums,mid+1,end);
        return root;



    }


    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nums;

        helper(root, nums);
        int n = nums.size();
        
        return create_bst(nums,0,n-1);

        
        
    }
};
