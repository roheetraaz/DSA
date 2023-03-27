/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *    int val;
 *    TreeNode * left;
 *    TreeNode * right;
 *    TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool hasPathSum(TreeNode *root, int targetSum)
        {
                 if (!root) return false;
            stack<pair<TreeNode*, int>> st;
            st.push({ root, targetSum});
            while (!st.empty())
            {
                auto[temp, target] = st.top();
                st.pop();
                int target2 = target- temp->val;
                if (!temp->right && !temp->left)
                {
                    if (target == temp->val)
                    {
                        return true;
                    }
                    else continue;
                }
                if (temp->right)
                {
                    st.push({ temp->right,target2});
                }
                if (temp->left)
                {
                    st.push({ temp->left,target2});
                }
            }
            return false;
        }
};