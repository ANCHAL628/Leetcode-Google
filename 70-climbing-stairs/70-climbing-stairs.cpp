class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>mp ;
        return climbStair(n,mp) ;
    }
    int climbStair(int n,unordered_map<int,int>&mp){
        if(n == 0){
            return 1;
        }
        if(n < 0){
            return 0 ;
        }
        int currIn = n ;
        if(mp.find(currIn) != mp.end()){
            return mp[currIn] ;
        }
        mp[currIn] = climbStair(n-1,mp)+climbStair(n-2,mp) ;
        return mp[currIn] ;
    }
};