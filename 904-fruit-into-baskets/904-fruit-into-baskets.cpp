class Solution {
public:
    int totalFruit(vector<int>& fruits) {
       //find two max numbers
        // count number of times they occur
     //length should be 2 and hn longest subarray haveing length 2
        unordered_map<int,int>mp ;
        int start = 0 ;
        int end = 0 ;
        int maxi = 1 ;
        while(end < fruits.size()){
            mp[fruits[end]]++ ;
             if(mp.size() > 2){
                while(mp.size() > 2){
                    mp[fruits[start]]-- ;
                    if(mp[fruits[start]] == 0){
                        mp.erase(fruits[start]) ;
                        
                    }
                    start++ ;
                }
            }
            maxi = max(maxi,end-start+1) ;
           end++ ;
        }
        return maxi ;
    }
};