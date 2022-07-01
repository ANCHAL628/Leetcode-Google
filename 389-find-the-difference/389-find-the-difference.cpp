class Solution {
public:
    char findTheDifference(string s, string t) {
         int Xor = 0 ;
         for(auto it : s){
             Xor ^= it ;
         }
         for(auto it : t){
             Xor ^= it ;
         }
         return Xor ;
    }
};