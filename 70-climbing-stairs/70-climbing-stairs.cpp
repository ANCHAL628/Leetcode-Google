class Solution {
public:
    //O(n)
    int climbStairs(int n) {
        //recursion as we have choices so whther I will be taking 1 step or two steps and tc : exponential
      //  unordered_map<int,int>mp ;
        //tc : O(2^n)
        //sc : O(n)
        //Optimal ki tc : O(n)
        //sc  = O(n);
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