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
    int findDepth(TreeNode* root, int depth)
    {
        depth++;

        int leftD = 0, rightD = 0;

        if(nullptr != root->left)
            leftD = max(findDepth(root->left, depth), depth);

        if(nullptr != root->right)
            rightD = max(findDepth(root->right, depth), depth);

        if(nullptr == root->left && nullptr == root->right)
            return depth;

        return max(leftD, rightD);
    }

    int maxDepth(TreeNode* root) {
        if(nullptr == root)
            return 0;

        return findDepth(root, 0);
    }
};