class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     //sort the string and then add
        //2nd O(m*m*26)
        map<vector<int>,vector<string>>mp ;
        
        vector<vector<string>>answer ;
        for(auto it : strs){
            vector<int>count(26,0) ;
            //count character in each word
            for(auto itr : it){
                count[itr-'a'] += 1 ;
            }
            //push them with the cont
            mp[count].push_back(it) ;
        }
        for(auto it : mp){
            answer.push_back(it.second) ;
        }
        return answer ;
    }
};