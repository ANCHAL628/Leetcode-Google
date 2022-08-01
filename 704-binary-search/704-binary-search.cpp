class Solution {
public:
    int search(vector<int>& arr, int target) {
        int low = 0 ;
        int high = arr.size()-1;
    
        int ans = -1 ;
        while(low <= high){
            int mid = low+(high-low)/2 ;
            if(arr[mid] == target){
                ans = mid ;
                break ;
            }else if(arr[mid] < target){
                low = mid+1 ;
            }else{
                high = mid-1 ;
            }
        }
       return ans ; 
    } 
};