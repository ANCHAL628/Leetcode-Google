class Solution {
public:
    //recursion time complexity = O(2^n)
    //dp time complexity : O(n)
    //space : O(n)
    int climbStairs(int n) {
     //unordered map and reursion
        unordered_map<int,int>mp ;
     return noOfSteps(n,mp,0) ;
    }
    int noOfSteps(int n,unordered_map<int,int>&mp,int currentIn){
       if(currentIn == n){
           return 1 ;
       }
        if(currentIn > n){
            return 0 ;
        }
        int curr = currentIn ;
        if(mp.find(currentIn) != mp.end()){
            return mp[currentIn] ;
        }
        
        int oneStep = noOfSteps(n,mp,currentIn+1) ;
        int twoStep = noOfSteps(n,mp,currentIn+2) ;
        mp[curr] = oneStep+twoStep ;
        return mp[curr] ;
        
    }
    
};