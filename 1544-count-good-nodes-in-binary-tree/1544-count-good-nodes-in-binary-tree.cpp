/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *int val;
 *TreeNode * left;
 *TreeNode * right;
 *TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        int ans;
    void rec(TreeNode *tr,int x1)
    {
        if (tr == NULL) return;
        if (tr->val >= x1)
        {
            x1 = tr->val;
            ans++;
        }

        rec(tr->left,x1);
        rec(tr->right,x1);
    }

    int goodNodes(TreeNode *root)
    {
        int x1 = root->val;
        ans = 0;
        rec(root,x1);
        return ans;
    }
};
