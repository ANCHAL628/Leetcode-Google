class Solution {
public:
  //tc : O(n^2)
  void changeRow(int currRow,vector<vector<int>>&matrix){
      for(int i = 0 ; i < matrix[currRow].size() ; i++){
          matrix[currRow][i] = 0 ;
      }
  }
   void changeCol(int currCol,vector<vector<int>>&matrix){
      for(int i = 0 ; i < matrix.size() ; i++){
          matrix[i][currCol] = 0 ;
      }
  }
  void setZeroes(vector<vector<int>>& matrix) {
     //O(n^2)-->store all the rows and columns no where the value is zero and then separately change them
      vector<pair<int,int>>rowCol ;
      for(int i = 0 ; i < matrix.size() ; i++){
          for(int j = 0 ; j < matrix[i].size() ; j++){
              if(matrix[i][j] == 0){
                  pair<int,int>K({i,j}); 
                  rowCol.push_back(K) ;
              }
          }
      }
      for(auto it : rowCol){
          changeRow(it.first,matrix) ; 
          changeCol(it.second,matrix) ;
      }
    }
};