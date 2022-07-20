class Solution {
public:
    int fib(int n) {
        //tc of recursion : O(2^n)
        //sc : O(n)
        unordered_map<int,int>mp ;
        return fibNo(n,mp)  ;
    } 
    int fibNo(int n,unordered_map<int,int>&mp){
        if(n == 0){
            return 0 ;
        }
        if(n == 1){
            return 1 ;
        }
        int currentSt = n ;
        if(mp.find(n) != mp.end()){
            return mp[n] ;
        }
        mp[n] = fibNo(n-1,mp)+fibNo(n-2,mp) ;
        return mp[n] ;
    }
};