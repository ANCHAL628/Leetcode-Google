class Solution {
public:
    bool isAnagram(string s, string t) {
    map<char,int>mp1 ;
  //  map<int,char>mp2 ;
    for(auto it : s){
        mp1[it]++ ;
       }
    for(auto it : t){
        mp1[it]-- ;
       }
    for(auto it : mp1){
        //mp1[t[i]]-- ;
        if(it.second != 0){
            return false ;
        }
       }
       return true ;
    }
};