class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // vector<vector<int>vis;
        vector<int>final;
        vector<int>ans;
        int left=0;int right=matrix[0].size();
        int top=0; int bottom=matrix.size();
        int k =right*bottom;
        while(top<bottom && left<right){
            for(int i=left;i<right;i++){
                final.push_back(matrix[top][i]);
               
            }
             top++;
            for(int i=top;i<bottom;i++){
                final.push_back(matrix[i][right-1]);
                
            }
            right--;    
            for(int i=right-1;i>=left;i--){
                final.push_back(matrix[bottom-1][i]);
            }
            bottom--;
            for(int i=bottom-1;i>=top;i--){
                final.push_back(matrix[i][left]);
            }
            left++;
        }
        for(int i=0;i<k;i++){
            ans.push_back(final[i]);
        }
        return ans;
    }
};