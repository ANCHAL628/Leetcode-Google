class Solution {
public:
    int climbStairs(int n) {
      
        unordered_map<int,int>mp ;
        return noOfWays(n,0,mp) ;
    }
    int noOfWays(int totalStairs,int currentSt,unordered_map<int,int>&mp){
      //base case having == n
        if(totalStairs == currentSt){
            return 1 ;
        }
        if(totalStairs < currentSt){
            return 0 ;
        }
        int currentK= currentSt;
        if(mp.find(currentSt) != mp.end()){
            return mp[currentSt] ;
        }
        int oneJump = noOfWays(totalStairs,currentSt+1,mp) ;
        int twoJump = noOfWays(totalStairs,currentSt+2,mp) ;
        mp[currentSt] = oneJump+twoJump ;
        return mp[currentSt] ;
    } 
    
};