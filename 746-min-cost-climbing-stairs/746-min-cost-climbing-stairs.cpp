class Solution {
public:
  //  tc : O(n)
//sc : O(n)
    int minCostClimbingStairs(vector<int>& cost) {
        unordered_map<int,int>mp ;
        return min(minCost(cost,mp,0),minCost(cost,mp,1)) ;
    }
    int minCost(vector<int>&cost,unordered_map<int,int>&mp,int currentIn){
        if(currentIn >= cost.size()){
            return 0 ;
        }
        if(currentIn == cost.size()){
            return 1001 ;
        }
        int currentKey = currentIn ;
        if(mp.find(currentIn) != mp.end()){
            return mp[currentIn] ;
        }
        int oneStep = cost[currentIn]+minCost(cost,mp,currentIn+1) ;
        int twoStep = cost[currentIn]+minCost(cost,mp,currentIn+2) ;
        mp[currentIn] = min(oneStep,twoStep) ;
        return mp[currentIn] ;
    }
};