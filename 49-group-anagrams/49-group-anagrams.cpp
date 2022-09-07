class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       vector<vector<string>>anagrams ;
       map<vector<int>,vector<string>>mp ;
       for(auto it : strs){
          vector<int>count(26,0) ;
           for(auto itr : it){
               count[itr-'a'] += 1 ;
           }
           mp[count].push_back(it) ;
       }
        for(auto it : mp){
            anagrams.push_back(it.second) ;
        }
        return anagrams ;
    }
};