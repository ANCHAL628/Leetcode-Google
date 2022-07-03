class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int front = k-1 ;
        int end = cardPoints.size()-1 ;
        int maxi = 0 ;
        int sum = 0 ;
        //sum of first k elements
        for(int i = 0 ; i < k ; i++){
           sum += cardPoints[i]  ;
        }
        maxi = sum ;
        //take element from back and substract it from the start
        while(front >= 0 && front < end){
            sum += cardPoints[end] ;
            sum -= cardPoints[front] ;
            maxi = max(maxi,sum) ;
            front-- ;
            end-- ;
        }
        return maxi ;
    }
};