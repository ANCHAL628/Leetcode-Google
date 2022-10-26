class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
       
        vector<vector<int>>mergedInterval ;
        sort(intervals.begin(),intervals.end()) ;
         vector<int>tempInterval = intervals[0] ;
        for(auto it : intervals){
            if(tempInterval[1] >= it[0]){
                tempInterval[1] = max(tempInterval[1],it[1]) ;
              //  tempInterval[0] = min(tempInterval[0],it[0]) ;
            }else{
                mergedInterval.push_back(tempInterval) ;
                tempInterval = it  ;
            }
        }
        mergedInterval.push_back(tempInterval) ;
        return mergedInterval ;
    }
};


//////