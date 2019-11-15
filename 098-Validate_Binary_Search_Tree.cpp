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
    bool isValidBST(TreeNode* root) {
        stack<TreeNode*> s;
        TreeNode* curr = root;
        TreeNode* prev = NULL;
        
        while (!(curr == NULL && s.empty())) {
            while (curr != NULL) {
                s.push(curr);
                curr = curr->left;
            }
            curr = s.top();
            s.pop();
            
            if (prev != NULL && curr->val <= prev->val) {
                return false;
            }
            prev = curr;
            curr = curr->right;
        }
        return true;
        
    }
};
