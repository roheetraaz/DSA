class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<int> res(n, -1);
        
        //Use the fact that each node will be visited by two colors both only once
        //So we push them into graph and change the values of visited nodes to -1 for avoiding cycles.
        vector<vector<pair<int, int> > > edges(n);  
        for(auto &e : red_edges) edges[e[0]].push_back({e[1], 0});  //{index, color}
        for(auto &e : blue_edges) edges[e[0]].push_back({e[1], 1});
        
        //BFS
        queue<vector<int> > q;  
        q.push({0, -1, 0});     //{current index, color, distance}
        while(!q.empty()){
            auto element = q.front(); q.pop();
            int curr = element[0];
            int co = element[1];
            int dist= element[2];
            
            res[curr] = (res[curr] == -1) ? dist : res[curr];
            
            for(auto &e : edges[curr]){
                int index = e.first;
                int color = e.second;
                if(index != -1 && color != co){    //(1) node pair is first visited (2) different color 
                    q.push(vector<int> {index, color, dist + 1});
                    e.first = -1;
                }
            }
        }
        return res;
    }
};