class Solution {
public:
    //O(n*w)
    int change(int amount, vector<int>& coins) {
        //vector<vector<int>>dp(coins.size()+1,vector<int>(amount+1,-1)) ;
        unordered_map<string,int>mp ;
        return  NoOfWays(amount,coins,0,mp);
    }
    int NoOfWays(int amount,vector<int>&coins,int currentIn,unordered_map<string,int>&mp){
        if(amount == 0){
            return 1 ;
        }
        if(coins.size() == currentIn){
            return 0 ;
        }
        string key = to_string(amount)+"-"+to_string(currentIn) ;
        if(mp.find(key) != mp.end()){
            return mp[key] ;
        }
        int consider = 0 ;
        if(coins[currentIn] <= amount){
            consider = NoOfWays(amount-coins[currentIn],coins,currentIn,mp) ;
        }
        int notConsider = NoOfWays(amount,coins,currentIn+1,mp) ;
        mp[key] =  consider+notConsider ;
        return mp[key] ;
    } 
};