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
    int subTreeDepth(TreeNode* root)
    {
        if(!root){return 1;}
        else
        {
            return 1+max(subTreeDepth(root->left), subTreeDepth(root->right));
        }
    }

    bool isBalanced(TreeNode* root) {
        if(!root){return true;}
        else
        {
            int h1=subTreeDepth(root->left);
            int h2=subTreeDepth(root->right);
            if(abs(h1-h2)>1)
            {
                return false;
            }
            else
            {
                return(isBalanced(root->left) && isBalanced(root->right));
            }
            
        }
        
    }
};
