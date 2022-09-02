class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //simply iterate through the last 
        //best : O(n)
        int i = m-1 ;
        int j = n-1 ;
        int currIn = m+n-1 ;
        while(j >= 0){
           nums1[currIn--] = i >= 0 && nums1[i] > nums2[j]?nums1[i--]:nums2[j--] ;
        }
    }
};