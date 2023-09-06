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
        void rec(TreeNode *tr, vector<int> &v1)
        {
            if (tr->left == nullptr && tr->right == nullptr)
            {
                v1.push_back(tr->val);
                return;
            }
            
            if (tr->left != nullptr) rec(tr->left, v1);
            if (tr->right != nullptr) rec(tr->right, v1);
        }
    bool leafSimilar(TreeNode *root1, TreeNode *root2)
    {
        vector<int> v1, v2;
        rec(root1, v1);
        rec(root2, v2);
        // for(auto i : v1)cout<<i<<" ";
        // cout<<endl;
        //  for(auto i : v2)cout<<i<<" ";
        return v1 == v2;
    }
};