//1022. Sum of Root To Leaf Binary Numbers

class Solution {
public:
int cal(TreeNode* root, int val){
    if(root == NULL) return 0;

    val = (2*val) + root->val;
    if(root->left == NULL && root->right == NULL) return val;
    return cal(root->left,val) + cal(root->right,val);
}

    int sumRootToLeaf(TreeNode* root) {
        return cal(root,0);
        
    }
};
