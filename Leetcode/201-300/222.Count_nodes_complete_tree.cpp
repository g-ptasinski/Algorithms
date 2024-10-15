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
    int countNodes(TreeNode* root) {

        if(root == nullptr)
        {
            return 0;
        }

        int rightDepth = getDepth(root->right);
        int leftDepth = getDepth(root->left);

        if(rightDepth == leftDepth)
        {
            return pow(2, leftDepth)+countNodes(root->right);
        }
        else
        {
            return pow(2,rightDepth)+countNodes(root->left);
        }
    }

    int getDepth(TreeNode* root)
    {
        if(root == nullptr)
        {
            return 0;
        }
        else
        {
            return 1 + getDepth(root->left);
        }
    }
};
