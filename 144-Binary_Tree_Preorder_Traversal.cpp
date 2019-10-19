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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> result;
        stack<TreeNode*> s;
        
        //don't push if empty tree
        if (root != NULL)
            s.push(root);
        
        TreeNode* curr;
        
        while (!s.empty()) {
            curr = s.top();
            s.pop();
            
            if (curr->right != NULL) {
                s.push(curr->right);
            }
            
            if (curr->left != NULL) {
                s.push(curr->left);
            }
            
            result.push_back(curr->val);
        }
        
        return result;
    }
};
