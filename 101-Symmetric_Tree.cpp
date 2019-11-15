/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> lr;
        queue<TreeNode*> rl;
        if (root != NULL) {
            lr.push(root->left);
            rl.push(root->right);
        }
        
        while (!lr.empty() && !rl.empty()) {
            TreeNode* r = rl.front();
            TreeNode* l = lr.front();
            rl.pop();
            lr.pop();
            
            if (r!= NULL) {
                rl.push(r->right);
                rl.push(r->left);
            }
            
            if (l!= NULL) {
                lr.push(l->left);
                lr.push(l->right); 
            }
            
            if (r && !l || l && !r) {
                return false;
            }
            if (r && l && r->val != l->val) {
                return false;
            }

        }
        return true;
    }
};
