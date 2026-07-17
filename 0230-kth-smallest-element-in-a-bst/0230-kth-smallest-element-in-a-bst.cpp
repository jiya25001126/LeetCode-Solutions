/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int prevOrder = 0;

    int kthSmallest(TreeNode* root, int k) {
        if (root == NULL) {
            return -1;
        }
        if (root->left != NULL) {
            int left = kthSmallest(root->left, k);
            if (left != -1) {
                return left;
            }
        }
        if (prevOrder + 1 == k) {
            return root->val;
        }
        prevOrder += 1;
        if (root->right != NULL) {
            int right = kthSmallest(root->right, k);
            if (right != -1) {
                return right;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna