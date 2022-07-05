class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        //check whether hand is divisible by k basically group size or not
        if(hand.size()%groupSize != 0){
            return false ;
        }
        map<int,int>mp ;
        for(auto it : hand){
            mp[it]++ ;
        }
        sort(hand.begin(),hand.end()) ;
        int currGrp = 0 ;
        
        int no = 0 ;
        for(auto it : hand){
            currGrp = it ;
            int group = 0;
            for(int i = currGrp ; i < currGrp+groupSize ; i++){
            if(mp.find(i) != mp.end()){
                 if(mp[i] == 1){
                     group++ ;
                     mp.erase(i) ;
                 }else if(mp[i]  > 1){
                     group++ ;
                     mp[i]-- ;
                 }
            }else{
                break ;
              }
            }
            if(group  == groupSize){
               no++ ; 
            }
        }
        return no == (hand.size()/groupSize) ;
    }
};