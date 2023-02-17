#include <bits/stdc++.h>
#include <climits>
using namespace std;
class Node
{
public:
    // T data;
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
void level_order(Node *node, vector<vector<int>> &lot)
{
    if (node == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(node);
    while (!q.empty())
    {

        int s = q.size();
        vector<int> level;
        for (int i = 0; i < s; i++)
        {
            Node *temp = q.front();
            q.pop();

            if (temp != NULL)
            {
                level.push_back(temp->data);
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
        lot.push_back(level);
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}

