//404. Sum of Left Leaves
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

//app->1
class Solution {
public:

    int calculate(TreeNode* root, bool is_left){
        if(root == NULL) return 0;
        if(!root->left && !root->right && is_left) return root->val;

        int left =  calculate(root->left,true);
        int right = calculate(root->right,false);

        return left+right;

    }


    int sumOfLeftLeaves(TreeNode* root) {

        return calculate(root, NULL);

        
    }
};

//app->2
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int calculate(TreeNode* root, TreeNode* parent){
        if(root == NULL) return 0;

        int left =  calculate(root->left,root);
        int right = calculate(root->right,root);

        if(!root->left && !root->right && parent && parent->left == root) return root->val +left+ right;
        else return left+right;

    }


    int sumOfLeftLeaves(TreeNode* root) {

        return calculate(root, NULL);

        
    }
};
