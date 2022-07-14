class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        //taake first k sum
        int sum = 0 ;
        int maxi = INT_MIN ;
        for(int i = 0 ; i < k ; i++){
          sum  +=  cardPoints[i] ;
        }
        int first = k-1 ;
        int last = cardPoints.size()-1 ;
        maxi = sum ;
        while(first >= 0 && first < last){
            sum += cardPoints[last] ;
            sum -= cardPoints[first] ;
            maxi = max(maxi,sum) ;
            first-- ;
            last-- ;
            
         }
        return maxi ;
        }
};