class Solution {
public:
    void setRowsToZero(vector<vector<int>>& matrix,int rowNo){
        for(int col = 0 ; col < matrix[0].size() ; col++){
            matrix[rowNo][col] = 0 ;
        }
    }
     void setColToZero(vector<vector<int>>& matrix,int colno){
        for(int row = 0 ; row < matrix.size() ; row++){
            matrix[row][colno] = 0 ;
        }
    }
    void setZeroes(vector<vector<int>>& matrix) {
        //O(n^2)
        vector<pair<int,int>>rowCol ;
        pair<int,int>p ;
        //store the row and column in pair where its 0
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = 0 ; j < matrix[0].size() ; j++){
                if(matrix[i][j] == 0){
                   pair p = make_pair(i,j);
                   rowCol.push_back(p) ;
                }
               
                
             }
        }
        for(auto it : rowCol){
            setRowsToZero(matrix,it.first) ;
            setColToZero(matrix,it.second) ;
        }
    }
};