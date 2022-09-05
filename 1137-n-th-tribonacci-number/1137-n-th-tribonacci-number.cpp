class Solution {
public:
    int tribonacci(int n) {
        unordered_map<int,int>mp ;
        return nthTrib(n,mp) ; 
    }
    int nthTrib(int n,unordered_map<int,int>&mp){
        if(n == 0){
            return 0 ;
        }
        if(n == 1){
            return 1 ;
        }
        if(n == 2){
            return 1 ;
        }
        int currentKey = n ;
        if(mp.find(currentKey) != mp.end()){
            return mp[currentKey] ;
        }
        mp[currentKey] = nthTrib(n-1,mp)+nthTrib(n-2,mp)+nthTrib(n-3,mp) ;
        return mp[currentKey] ;
    }
};