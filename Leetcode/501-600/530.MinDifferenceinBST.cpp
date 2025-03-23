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

    int answer = INT_MAX;
    int prev = INT_MAX;

    void inOrderTraversal(TreeNode* root)
    {
        if(!root)
        {
            return;
        }

        if(root->left)
        {
            inOrderTraversal(root->left); 
        }

        if(prev!=INT_MAX)
        {
            answer= min(answer, abs(prev-root->val));    
        }     
        prev = root->val;

        if(root->right)
        {
            inOrderTraversal(root->right);
        }
    }

    int getMinimumDifference(TreeNode* root) 
    {
        inOrderTraversal(root);

        return(answer);
    }
};
