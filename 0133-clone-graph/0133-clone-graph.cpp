/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution
{
        unordered_map<Node*,Node*>mp;
    public:
        Node* cloneGraph(Node *node)
        {
            if(!node)return NULL;
                
            Node * ans=new Node(node->val,{});
                mp[node]=ans;
            queue<Node*>q;
            q.push(node);
            while(!q.empty()){
                     Node* temp=q.front();
                     q.pop();
                    
                    
                    for(auto a:temp->neighbors){
                            if(mp.find(a)==mp.end()){
                                    mp[a]=new Node(a->val,{});
                                    q.push(a);
                            }
                            mp[temp]->neighbors.push_back(mp[a]);
                    }
            }
          return mp[node];
        }
};