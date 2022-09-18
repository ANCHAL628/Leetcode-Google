class Solution {
public:
   //
    void sorting(vector<vector<int>> &intervals , vector<int> &newIntervals){
        pair<int,int> p1 ;
        int i ;
        p1.first = newIntervals[0] ;
        for(i = 0 ; i < intervals.size() ; i++){
            if(intervals[i][0] > p1.first){
                break ;
            }
        }
        intervals.insert(intervals.begin()+i , newIntervals) ;
        //return ;
    }
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
      sorting(intervals , newInterval) ;
      vector<vector<int>> res ;
      pair<int,int> p1 ;
      p1.first = intervals[0][0] ;
      p1.second = intervals[0][1] ;
      for(int i = 1 ; i < intervals.size() ; i++){
          if(intervals[i][0] <= p1.second){
              p1.second = max(intervals[i][1] , p1.second) ;
          }else{
              res.push_back({p1.first,p1.second}) ;
              p1.first = intervals[i][0] ;
              p1.second = intervals[i][1] ;
          }
      }
        res.push_back({p1.first,p1.second});
        return res ;
      
    }
    
  
};