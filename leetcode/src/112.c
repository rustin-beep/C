#include <stdbool.h>
#include <stdlib.h>
struct TreeNode { int val; struct TreeNode *left; struct TreeNode *right; };
bool hasPathSum(struct TreeNode *root, int sum)
{
    if (root == NULL)
        return 0;
    if (!root->left && !root->right && sum - root->val == 0)
        return 1;
    return hasPathSum(root->left, sum - root->val) ||
           hasPathSum(root->right, sum - root->val);
}
