class Solution {
public:
    vector<int> goodIndices(vector<int>& nums, int k) {
        
        int n=nums.size();
        vector<int>l(n,1),r(n,1);
        int i;
        for(i=1;i<=n-1;i++)
        {
            if(nums[i-1]>=nums[i])
                l[i]+=l[i-1];
        }
        for(i=n-1;i>=1;i--)
        {
            if(nums[i-1]<=nums[i])
                r[i-1]+=r[i];
        }
        vector<int>res;
        for(i=k;i<n-k;i++)
        {
            if(l[i-1]>=k and r[i+1]>=k)
                res.push_back(i);
        }
        return res;
    }
};