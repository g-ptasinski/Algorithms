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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.empty())
        {
            return nullptr;
        }
        else
        {
            int i = nums.size()/2;

            TreeNode* Root = new TreeNode(nums[i]);
            vector<int> tmp1; 
            vector<int> tmp2; 
            int j = 0;
            for(auto item : nums)
            {
                if(j<i)
                {
                    tmp1.push_back(item);
                }
                if(j>i)
                {
                    tmp2.push_back(item);
                }
                
                ++j;
            }

            Root->left = sortedArrayToBST(tmp1);
            Root->right = sortedArrayToBST(tmp2);

            return Root;
        }
    }
};
