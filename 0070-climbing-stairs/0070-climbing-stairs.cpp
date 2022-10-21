class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int,int>mp ;
        return noOfWays(n,0,mp) ;
    }
    int noOfWays(int finSt,int currStair,unordered_map<int,int>&mp){
        if(currStair == finSt){
            return 1 ;
        }
        else if(currStair > finSt){
            return 0 ;
        }
        int currk = currStair ;
        if(mp.find(currk) != mp.end()){
            return mp[currk] ;
        }
        mp[currk] = noOfWays(finSt,currStair+1,mp)+noOfWays(finSt,currStair+2,mp) ;
        return mp[currk] ;
    }
    
};