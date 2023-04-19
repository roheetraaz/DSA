/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution {
public:
    int longestZigZag(TreeNode* root) {
        queue<pair<pair<TreeNode*,bool>,int>>q;
        if(!root)
            return 0;
        if(root->left)
            q.push({{root->left,false},1});
        if(root->right)
            q.push({{root->right,true},1});
        int maxiLen = 0;
        while(!q.empty())
        {
            pair<pair<TreeNode*,char>,int> pr = q.front();q.pop();
            
            TreeNode* node = pr.first.first;
            char nodeDir = pr.first.second;
            int len = pr.second;
            
            maxiLen = max(maxiLen, len);
           //  cout<<node->val<< " "<<nodeDir<<" "<<len<<endl;
            if(node->left)
            {
                if(!nodeDir)
                    q.push({{node->left,false},1});
                else
                    q.push({{node->left,false},len+1});
            }
            if(node->right)
            {
                if(nodeDir)
                    q.push({{node->right,true},1});
                else
                    q.push({{node->right,true},len+1});
            }
        }
        return maxiLen;
    }
};