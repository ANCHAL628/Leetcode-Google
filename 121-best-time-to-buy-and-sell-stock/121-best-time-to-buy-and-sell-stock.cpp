class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //O(n^2) -> i WOUld be checking for all  particular prices and then would be finding one for the next
        //O(n) ->it simply represent a curve so i would be keeping track of max min value
        int minVal = prices[0] ;
        int maxVal = 0 ;
        for(int i = 1 ; i < prices.size() ; i++){
           minVal = min(minVal,prices[i]) ;
           maxVal = max(maxVal,prices[i]-minVal) ;
        }
        return maxVal ;
    }
};