class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>mp ;
        return min(minCost(0,cost.size(),cost,mp),minCost(1,cost.size(),cost,mp)) ;
    }
    int minCost(int currSt,int endSize,vector<int>&cost,unordered_map<int,int>&mp){
        if(currSt == endSize){
            return 0 ;
        }
        if(currSt > endSize){
            return 1001 ;
        }
        int curk = currSt ;
        if(mp.find(curk) != mp.end()){
            return mp[curk] ;
        }
        int oneStep = cost[currSt]+minCost(currSt+1,endSize,cost,mp) ;
        int twoStep = cost[currSt]+minCost(currSt+2,endSize,cost,mp) ;
        mp[curk] = min(oneStep,twoStep) ;
        return mp[curk] ;
    }
   
};