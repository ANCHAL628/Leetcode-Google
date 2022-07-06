class Solution {
public:
    int minSumOfLengths(vector<int>& arr, int target) {
        
        int n = arr.size();
        
        // track prefix sum of array 
        vector<int>sum(n+1,0);
        
        // track the min length target sum subarray till last pointer
        vector<int>dp(n+1,INT_MAX);
        
        sum[0] = 0;
        
        // first pointer of the window 
        int first = 1;        
        
        // result min length sum of 2 target sum sub array
        int min_length_sum = INT_MAX;
        
        // current window length
        int curr_len = 0;
        
        // min length target sum subarray till last pointer
        int min_len = INT_MAX;
        
        // loop through array and check target sum subarray and previous min length target sum subarray
        for(int last=1;last<=n;last++)
        {
            // update prefix sum for current last pointer
            sum[last] = sum[last-1] + arr[last-1];
            curr_len++;
            
            // shrink window until window sum <= target 
            while((sum[last] - sum[first-1]) > target)
                first++,curr_len--;
            
            // check for previous valid target sum subarray of min length if current window sum == target
            if((sum[last] - sum[first-1])==target)
            {
                // if previous target sum subarray exists then update min_length_sum
                // if no previous target sum subarray exists then dp[first-2] will be INT_MAX
                // dp[first-2] returns min length of target sum subarray which has last < current first
                if(first>1 && dp[first-2]!=INT_MAX)
                    min_length_sum = min(min_length_sum,(dp[first-2] + curr_len));
                
                // update min length only any target sum subarray found 
                min_len = min(min_len,curr_len);                                        
            }
            
            // update DP[last-1] with min_len which stores the min length of possible target sum subrray till last
            dp[last-1] = min_len;
        }
        
        // no result found if min_length_sum is INT_MAX
        return min_length_sum==INT_MAX?-1 : min_length_sum;
    }
};