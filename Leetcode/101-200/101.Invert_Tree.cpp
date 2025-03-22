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
    bool isSameTree(TreeNode* p, TreeNode* q)  
    {
        if(!p || !q)
        {
            return p==q;
        }
        return p->val == q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }

    TreeNode* invertTree(TreeNode* root)
    {
        if(!root)
        {
            return root;
        }
        else
        {
            TreeNode* tmp = invertTree(root->left);
            root->left = invertTree(root->right);
            root->right = tmp;
        }
        return root;
    }

    bool isSymmetric(TreeNode* root) 
    {
        return isSameTree( root->left, invertTree(root->right) );
    }
};
