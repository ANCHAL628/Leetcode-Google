class Solution {
public:
    void dfs(vector<bool>&visited,int currSource,vector<vector<int>>&isConnected){
        if(visited[currSource]){
           return ; 
        }
        visited[currSource] = true ;
        vector<int>sources = isConnected[currSource] ;
        for(int i = 0 ; i < isConnected.size() ; i++){
            if(sources[i] == 1){
                dfs(visited,i,isConnected) ;
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<bool>visited(isConnected.size()+1,false) ;
        int answer =  0;
        for(int i = 0 ; i < isConnected.size() ; i++){
            if(!visited[i]){
                dfs(visited,i,isConnected) ;
                answer++ ;
            }
        }
        return answer ;
    }
};