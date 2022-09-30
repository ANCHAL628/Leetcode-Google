class Solution {
public:
 //   tc : O(k)
    int maxScore(vector<int>& cardPoints, int k) {
          int maxSum = 0 ;
          int currSum = 0 ;
          for(int i = 0 ; i < k ; i++){
              currSum += cardPoints[i] ;
          }
        int first = k-1 ;
        int last = cardPoints.size()-1 ;
        maxSum = currSum ;
        while(first >= 0 && first < last){
            currSum += cardPoints[last] ;
            currSum -= cardPoints[first] ;
            maxSum = max(maxSum,currSum) ;
            first-- ;
            last-- ;
        }
        return maxSum ;
    }
};