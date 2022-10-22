class Solution {
public:
    void sinkIsland(vector<vector<char>>&grid,int currRow,int currColumn,int row,int column){
        if(currRow < 0 || currColumn < 0 || currRow >= row || currColumn >= column || grid[currRow][currColumn] == '0'){
            return  ;
        }
        grid[currRow][currColumn] = '0' ;
        sinkIsland(grid,currRow+1,currColumn,row,column) ;
        sinkIsland(grid,currRow-1,currColumn,row,column) ;
        sinkIsland(grid,currRow,currColumn+1,row,column) ;
        sinkIsland(grid,currRow,currColumn-1,row,column) ;
        return ;
    }
    int numIslands(vector<vector<char>>& grid) {
        int answer = 0 ;
        int row= grid.size() ;
        int column = grid[0].size() ;
        for(int i = 0 ; i < row ; i++){
            for(int j = 0 ; j < column ; j++){
                if(grid[i][j] == '1'){
                    sinkIsland(grid,i,j,row,column) ;
                    answer++ ;
                }
            }
        }
        return answer ;
    }
    
};
//