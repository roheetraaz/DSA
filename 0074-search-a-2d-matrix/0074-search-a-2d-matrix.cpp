class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mid=0;
        int col=matrix[0].size()-1;
        while(mid<=(matrix.size()-1)  && col>=0){
            if(matrix[mid][col]==target){
                return true;
            }
            
            else if(matrix[mid][col]>target){
                col--;
            }
            else{
                mid++;
            }
        }
        return false;
    }
};