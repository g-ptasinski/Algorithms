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
    TreeNode* invertChildren(TreeNode* head)
    {
        if(head == nullptr){return nullptr;}
        
        TreeNode* tmp = head->left;
        head->left = head->right;
        head->right = tmp;

        head->left = invertChildren(head->left);
        head->right= invertChildren(head->right);

        return head;
    }

    TreeNode* invertTree(TreeNode* root) {
        
        root = invertChildren(root);

        return root;
    }
};
