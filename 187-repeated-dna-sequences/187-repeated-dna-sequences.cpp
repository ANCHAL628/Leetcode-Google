class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp ;
        vector<string> ans ;
        for (int i = 0 ; i+9 < s.length() ; i++){
           string temp = s.substr(i,10) ;
           mp[temp]++ ;
        } for (auto itr = mp.begin() ; itr != mp.end() ; ++itr){
           if(itr -> second > 1){
               ans.push_back(itr -> first) ;
           }
        }
        return ans  ;
    }
};