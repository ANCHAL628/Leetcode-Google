class Solution {
public:
    //most recent one should be negativee
    //top of stack should be pos
    vector<int> asteroidCollision(vector<int>& asteroids) {
       stack<int>elem ;
       vector<int>ans ;
        for(auto it : asteroids){
            //collision will only happen when element attop of tack would b e pos and curr element of vec should be negative
           //if positive element add to stack
            if(it > 0){
                elem.push(it) ;
            }else{
                //means the comapring element if negative
                //if diff <  means smaller element is tp of stack
                while(!elem.empty() && elem.top() > 0 && elem.top() < abs(it)){
                    elem.pop() ;
                }
                //diff zero means both are equal
                if(!elem.empty() && elem.top() == abs(it)){
                    elem.pop() ;
                }else if(elem.empty() || elem.top() < 0){
                    elem.push(it) ;
                }
            }
        }
         while(!elem.empty())
        {
            ans.push_back(elem.top());
            elem.pop();
        }
        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};