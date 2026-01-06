

//1161. Maximum Level Sum of a Binary Tree
class Solution {
public:
    int maxLevelSum(TreeNode* root) {

        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int max_sum = q.front()->val;
        int level_sum = 0;
        int level = 0;
        int max_sum_level = 1;


        while(!q.empty()){
            
            TreeNode* temp = q.front();
            q.pop();
            if(temp != NULL) level_sum+= temp->val;
            if(temp == NULL && !q.empty()){
                level++;
                if(level_sum > max_sum){
                    max_sum_level = level;
                    max_sum = level_sum;

                }
                level_sum = 0;
                
                 q.push(NULL);
                 
            }
            if(temp == NULL && q.empty()){
                if(level_sum > max_sum) return ++level;
            }
            if(temp != NULL && temp->left) q.push(temp->left);
            if(temp != NULL && temp->right) q.push(temp->right);

        }

        return max_sum_level;
        
    }
};
