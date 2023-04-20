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
        vector<long long> level_order(TreeNode *root)
        {
            queue<TreeNode*> q;
            vector<long long> ans;
            q.push(root);
            while (!q.empty())
            {
                int s = q.size();
                long long l = 0;
                while (s--)
                {
                    auto temp = q.front();
                        q.pop();
                    if (temp != NULL)
                    {
                        l += temp->val;
                    }
                    if (temp->left)
                    {
                        q.push(temp->left);
                    }
                    if (temp->right)
                    {
                        q.push(temp->right);
                    }
                }
                ans.push_back(l);
            }
            return ans;
        }
    long long kthLargestLevelSum(TreeNode *root, int k)
    {
        vector<long long> a = level_order(root);

        sort(a.begin(), a.end());
        int n = a.size();
        if(n<k){
                return -1;
        }
        return a[n - k];
    }
};