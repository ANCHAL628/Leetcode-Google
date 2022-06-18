class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pasTria(numRows) ;
        constructPasTriangle(pasTria,numRows) ;
        return pasTria ;
    }
    void constructPasTriangle(vector<vector<int>>&pasTria,int numRows){
        for(int i = 0 ; i < numRows ; i++){
            pasTria[i].resize(i+1) ;
            pasTria[i][0] = pasTria[i][i] = 1 ;
            for(int j = 1 ; j < i ; j++){
                pasTria[i][j] = pasTria[i-1][j-1]+pasTria[i-1][j] ;
            }
        }
    }
};