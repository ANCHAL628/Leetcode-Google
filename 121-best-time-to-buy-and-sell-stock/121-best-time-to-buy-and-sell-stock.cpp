class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum = 0;
        int cheapest = prices[0] ;
        for (int i = 1 ; i<prices.size() ; i++){
            cheapest = min(cheapest,prices[i]) ;
            maximum = max(maximum,prices[i]-cheapest) ;
        }
        return maximum ;
       
    }
};